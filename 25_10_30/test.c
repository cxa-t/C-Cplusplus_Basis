#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdbool.h>

//// 2.7
//int count(int A[], int n, int x)
//{
//    int cnt = 0;
//    for (int i = 0; i < n; ++i)
//        if (A[i] == x) ++cnt;
//    return cnt;
//}
//
///* 栈淘汰思想：栈空则入栈，栈顶相同则入栈，不同则弹栈（同归于尽）*/
//int majority_stack(int A[], int n)
//{
//    if (n <= 0) 
//        return -1;
//
//    int top = -1;      /* 栈顶元素，-1 表示栈空 */
//    int topCnt = 0;    /* 栈中元素个数（实际只存相同值）*/
//
//    for (int i = 0; i < n; ++i)
//    {
//        if (topCnt == 0)          /* 栈空 */
//        {
//            top = A[i];
//            topCnt = 1;
//        }
//        else if (A[i] == top)     /* 相同则“入栈” */
//        {
//            ++topCnt;
//        }
//        else                      /* 不同则“弹栈” */
//        {
//            --topCnt;
//        }
//    }
//
//    /* 栈可能空，也可能留下一个候选 */
//    if (topCnt > 0 && count(A, n, top) > n / 2)
//        return top;
//    return -1;
//}
//
///* 测试 */
//int main(void)
//{
//    int a[] = { 2, 2, 1, 1, 2, 2, 2 };
//    int n = sizeof(a) / sizeof(a[0]);
//    int maj = majority_stack(a, n);
//    if (maj != -1)
//        printf("Majority = %d\n", maj);
//    else
//        printf("No majority\n");
//    return 0;
//}


//2.8  两个等长有序数组 A、B 的中位数（分治，O(log n)）
//约定：n>=1，若 n 为偶数，返回下中位数 A[n/2-1] / B[n/2-1]
//核心分治函数
//传入 A[l1..r1] 和 B[l2..r2]，保证长度相等：r1-l1 == r2-l2
int findMedian(int A[], int l1, int r1, int B[], int l2, int r2)
{
    int n = r1 - l1 + 1;
    if (n == 1)                    // 只剩一个元素，取较大者
        return (A[l1] > B[l2]) ? A[l1] : B[l2];

    //半长
    int k = n / 2;                 
    //偶数个取靠前的中位数
    //奇数个取中间
    int mid1 = (n % 2 == 1) ? l1 + k : l1 + k - 1;
    int mid2 = (n % 2 == 1) ? l2 + k : l2 + k - 1;

    if (A[mid1] == B[mid2])              //幸运情况
        return A[mid1];
    else if (A[mid1] < B[mid2])          //舍弃 A 左半 + B 右半
        return findMedian(A, mid1, r1,B, l2, mid2);
    else                           //舍弃 A 右半 + B 左半
        return findMedian(A, l1, mid1,B, mid2, r2);
}

//对外接口：两数组长度均为 n
int medianTwoSorted(int A[], int B[], int n)
{
    return findMedian(A, 0, n - 1, B, 0, n - 1);
}

int main()
{
    //测试
    int A[] = { 1, 3, 5, 7 };
    int B[] = { 2, 4, 6, 8 };
    int n = sizeof(A) / sizeof(A[0]);
    printf("Median = %d\n", medianTwoSorted(A, B, n));
    return 0;
}