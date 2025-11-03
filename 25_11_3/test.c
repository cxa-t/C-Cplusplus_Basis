#define _CRT_SECURE_NO_WARNINGS 1

////BC110 井字棋
//#include<stdio.h>
//int main()
//{
//    char arr[3][3];
//    for (int i = 0; i < 3; i++)
//    {
//        for (int j = 0; j < 3; j++)
//        {
//            scanf(" %c", &arr[i][j]);
//        }
//    }
//    for (int i = 0; i < 3; i++)
//    {
//        //判断行
//        if (arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2])
//        {
//            if (arr[i][0] == 'K')
//            {
//                printf("KiKi wins!");
//                return 0;
//            }
//            else if (arr[i][0] == 'B')
//            {
//                printf("BoBo wins!");
//                return 0;
//            }
//        }
//    }
//    //判断列
//    for (int j = 0; j < 3; j++)
//    {
//        if (arr[0][j] == arr[1][j] && arr[0][j] == arr[2][j])
//        {
//            if (arr[0][j] == 'K')
//            {
//                printf("KiKi wins!");
//                return 0;
//            }
//            else if (arr[0][j] == 'B')
//            {
//                printf("BoBo wins!");
//                return 0;
//            }
//        }
//    }
//    //判断主对角线
//    if (arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2])
//    {
//        if (arr[0][0] == 'K')
//        {
//            printf("KiKi wins!");
//            return 0;
//        }
//        else if (arr[0][0] == 'B')
//        {
//            printf("BoBo wins!");
//            return 0;
//        }
//    }
//    //判断副对角线
//    if (arr[0][2] == arr[1][1] && arr[0][2] == arr[2][0])
//    {
//        if (arr[0][2] == 'K')
//        {
//            printf("KiKi wins!");
//            return 0;
//        }
//        else if (arr[0][2] == 'B')
//        {
//            printf("BoBo wins!");
//            return 0;
//        }
//    }
//    printf("No winner!");
//
//    return 0;
//}


////BC111 小乐乐与进制转换
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = 0;
//	int arr[100] = { 0 };
//	if (n == 0)
//	{
//		count++;
//		arr[count] = 0;
//	}
//	while (n)
//	{
//		count++;
//		arr[count] = n % 6;
//		n /= 6;
//	}
//	for (int i = count; i > 0; i--)
//		printf("%d", arr[i]);
//	return 0;
//}

////BC112 小乐乐求和
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	long long sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		sum += i;
//	}
//	printf("%lld", sum);
//	return 0;
//}

////BC113 小乐乐定闹钟
////version_1
//#include<stdio.h>
//int main()
//{
//	int a, b,d;
//	char c;
//	for (int i = 0; i < 1; i++)
//	{
//		scanf("%d%c%d%d", &a, &c, &b,&d);
//	}
//	int e = d / 60;
//	int f = d % 60;
//	int g = a+e;
//	int h = 0;
//	if (f + b >= 60)
//	{
//		g = g + 1;
//		h = (f + b) % 60;
//	}
//	else
//	{
//		h = f + b;
//	}
//	if (g > 24)
//	{
//		g %= 24;
//	}
//	else
//	{
//		g = a + e;
//	}
//	printf("%02d%c%02d", g, c, h);
//	return 0;
//}
////version_2
//#include <stdio.h>
//int main()
//{
//	int h = 0;
//	int m = 0;
//	int k = 0;
//	scanf("%d:%d %d", &h, &m, &k);
//	h = ((m + k) / 60 + h) % 24;
//	m = (m + k) % 60;
//	printf("%02d:%02d\n", h, m);
//	return 0;
//}

////BC114 小乐乐排电梯
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int a = 0;
//	scanf("%d", &n);
//	if (n <= 11)
//	{
//		a = 2;
//		printf("%d", a);
//	}
//	else
//	{
//		int b = n / 12;
//		int c = b * 4 + 2;
//		printf("%d", c);
//		
//	}
//	return 0;
//}

//BC115 小乐乐与欧几里得
#include<stdio.h>
int main()
{
	long long m,n;
	scanf("%lld%lld", &m, &n);
	long long a = m;
	long long b = n;
	while (n != 0)
	{
		int t = m % n;
		m = n;
		n = t;
	}
	long long d = m + (a * b) / m;
	printf("%lld", d);
	return 0;
}

////BC116 小乐乐改数字
////version_1
////输出为000001，而不是1
////#include<stdio.h>
////void print(long long int n)
////{
////	if (n > 9)
////	{
////		print(n / 10);
////	}
////	if (n % 2 == 0)
////	{
////		n = 0;
////		printf("%d", n);
////	}
////	else
////	{
////		n = 1;
////		printf("%d", n);
////
////	}
////}
////
////int main()
////{
////	long long int num = 0;
////	scanf("%u", &num);
////	if (num % 2 == 0)
////	{
////		printf("%lld", 0);
////	}
////	else if (num % 2 == 1)
////	{
////
////	}
////	print(num);
////	return 0;
////}
//
////version_2
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	long long  a = 0;
//	scanf("%lld", &a);
//	long long b = 0;
//	int arr[100] = { 0 };
//	int k = 0;
//	long long sum = 0;
//
//	//获取每一位的数值
//	while (a != 0)
//	{
//		b = a % 10;
//		a /= 10;
//		arr[k++] = b;
//	}
//
//	//判断每一位
//	for (int i = 0; i < k; i++)
//	{
//		if (arr[i] % 2 == 0)
//		{
//			arr[i] = 0;
//		}
//		else
//		{
//			arr[i] = 1;
//		}
//		//还原数字
//		sum += arr[i] * pow(10, i);
//	}
//
//	printf("%lld", sum);
//	return 0;
//}

//BC118 小乐乐与序列
// 
////version_1 时间复杂度过大
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[100001] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = 0; j < n - i - 1; j++)
//		{
//			if (arr[j] == arr[j + 1])
//			{
//				arr[j + 1] = 0;
//			}
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] != 0)
//		{
//			printf("%d ", arr[i]);
//		}
//
//	}
//	return 0;
//}
// 
//version_2
// 巧妙解决·避免排序
//#include <stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int k = 0;
//	scanf("%d", &n);
//
//	// 动态分配内存以存储输入的数字
//	int* arr = (int*)malloc(n *sizeof(int));
//	if (arr == NULL)
//	{
//		printf("内存分配失败");
//		return -1;
//	}
//
//	//数组下标从0开始
//	//通过循环读入 n 个数字，并将这些数字-1作为下标，将相应位置上的元素赋值为该数字本身，即 arr[k-1] = k。
//	//这样可以实现将输入的数字存储在数组中，并且由于下标和对应值都是 k，相同的数字会被覆盖，从而实现了去重的效果。
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &k);
//		arr[k-1] = k;
//	}
//
//	//输出去重后的数字
//	//如果某个位置上的元素不为 0，则将该位置上的元素输出，从而实现了按照大小顺序输出去重后的数字。
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != 0)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//
//	// 释放动态分配的内存
//	free(arr);
//
//	return 0;
//}