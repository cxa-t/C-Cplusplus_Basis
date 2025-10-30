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
///* ջ��̭˼�룺ջ������ջ��ջ����ͬ����ջ����ͬ��ջ��ͬ���ھ���*/
//int majority_stack(int A[], int n)
//{
//    if (n <= 0) 
//        return -1;
//
//    int top = -1;      /* ջ��Ԫ�أ�-1 ��ʾջ�� */
//    int topCnt = 0;    /* ջ��Ԫ�ظ�����ʵ��ֻ����ֵͬ��*/
//
//    for (int i = 0; i < n; ++i)
//    {
//        if (topCnt == 0)          /* ջ�� */
//        {
//            top = A[i];
//            topCnt = 1;
//        }
//        else if (A[i] == top)     /* ��ͬ����ջ�� */
//        {
//            ++topCnt;
//        }
//        else                      /* ��ͬ�򡰵�ջ�� */
//        {
//            --topCnt;
//        }
//    }
//
//    /* ջ���ܿգ�Ҳ��������һ����ѡ */
//    if (topCnt > 0 && count(A, n, top) > n / 2)
//        return top;
//    return -1;
//}
//
///* ���� */
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


//2.8  �����ȳ��������� A��B ����λ�������Σ�O(log n)��
//Լ����n>=1���� n Ϊż������������λ�� A[n/2-1] / B[n/2-1]
//���ķ��κ���
//���� A[l1..r1] �� B[l2..r2]����֤������ȣ�r1-l1 == r2-l2
int findMedian(int A[], int l1, int r1, int B[], int l2, int r2)
{
    int n = r1 - l1 + 1;
    if (n == 1)                    // ֻʣһ��Ԫ�أ�ȡ�ϴ���
        return (A[l1] > B[l2]) ? A[l1] : B[l2];

    //�볤
    int k = n / 2;                 
    //ż����ȡ��ǰ����λ��
    //������ȡ�м�
    int mid1 = (n % 2 == 1) ? l1 + k : l1 + k - 1;
    int mid2 = (n % 2 == 1) ? l2 + k : l2 + k - 1;

    if (A[mid1] == B[mid2])              //�������
        return A[mid1];
    else if (A[mid1] < B[mid2])          //���� A ��� + B �Ұ�
        return findMedian(A, mid1, r1,B, l2, mid2);
    else                           //���� A �Ұ� + B ���
        return findMedian(A, l1, mid1,B, mid2, r2);
}

//����ӿڣ������鳤�Ⱦ�Ϊ n
int medianTwoSorted(int A[], int B[], int n)
{
    return findMedian(A, 0, n - 1, B, 0, n - 1);
}

int main()
{
    //����
    int A[] = { 1, 3, 5, 7 };
    int B[] = { 2, 4, 6, 8 };
    int n = sizeof(A) / sizeof(A[0]);
    printf("Median = %d\n", medianTwoSorted(A, B, n));
    return 0;
}