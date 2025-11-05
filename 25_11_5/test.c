#define _CRT_SECURE_NO_WARNINGS

//except BC119 BC120
//include BC121-BC137

//////BC117 小乐乐走台阶
//////version_1  递归
////#include<stdio.h>
////int fun(int n)
////{
////	int a = 0;
////	if (n == 0)
////		return a = 1;
////	else if (n == 1)
////		return a = 1;
////	else
////	{
////		return fun(n - 1) + fun(n - 2);
////	}
////}
////int main()
////{
////	int n = 0;
////	scanf("%d", &n);
////	int num = 0;
////	if (n >= 0)
////	{
////		num = fun(n);
////	}
////	printf("%d", num);
////	return 0;
////}
//
//////version_2  非递归
////#include<stdio.h>
////int main()
////{
////	int n = 0;
////	scanf("%d", &n);
////
////	int i = 1;
////	int j = 2;
////	int a = 0;
////	
////	if (n >= 0)
////	{
////		if (n == 1 || n == 0)
////		{
////			printf("%d", i);
////		}
////		else if (n == 2)
////		{
////			printf("%d", j);
////		}
////		else
////		{
////			while (n - 2)
////			{
////				a = i + j;
////				i = j;
////				j = a;
////				n--;
////			}
////			printf("%d", a);
////		}
////	}
////	else
////	{
////		printf("输入不合法！");
////	}
////	return 0;
////}

////辗转相处法求最大公约数和最小公倍数
//#include<stdio.h>
//int main()
//{
//	int m, n;
//	scanf("%d%d", &m, &n);
//	int a = m;
//	int b = n;
//	int t = 0;
//	while (n != 0)
//	{
//		t = m % n;
//		m = n;
//		n = t;
//	}
//	printf("%d\n", m);
//	printf("%d\n", a * b / m);
//	return 0;
//}

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
//	for (int i = 0; i < k; i++)
//	{
//		printf("%d ", arr[i]);
//	}
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

////BC121 小乐乐学编程
//#include <stdio.h>
//int main() 
//{
//    printf("Practice makes perfect!");
//    return 0;
//}

////BC122 小乐乐算平均分
//#include<stdio.h>
//int main()
//{
//	float arr[3] = { 0 };
//	float sum = 0.0;
//	for (int i = 0; i < 3; i++)
//	{
//		scanf("%f", &arr[i]);
//		sum += arr[i];
//	}
//	printf("%.2f %.2f", sum, sum / 3.0);
//	return 0;
//}

////BC123 小乐乐找最大数
//#include<stdio.h>
//int main()
//{
//	int a, b, c, d;
//	scanf("%d%d%d%d", &a, &b, &c, &d);
//	int e=(a > b) ? ((a > c) ? ((a > d) ? a : d) : ((c > d) ? c : d)) : ((b > c) ? ((b > d) ? b : d) : ((c > d) ? c : d));
//	printf("%d", e);
//	return 0;
//}

////BC124 小乐乐是否被叫家长
//#include<stdio.h>
//int main()
//{
//	int arr[3] = { 0 };
//	float sum = 0.0;
//	float a = 0.0;
//	for (int i = 0; i < 3; i++)
//	{
//		scanf("%d", &arr[i]);
//		sum += arr[i];
//		a = sum / 3.0;
//	}
//	if (a >= 60.0)
//	{
//		printf("NO\n");
//	}
//	else
//	{
//		printf("YES\n");
//	}
//	return 0;
//}

////BC125 小乐乐转换成绩
//#include<stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//
//    if (n >= 90 && n <= 100) {
//        printf("A\n");
//    }
//    else if (n >= 80 && n < 90) {
//        printf("B\n");
//    }
//    else if (n >= 70 && n < 80) {
//        printf("C\n");
//    }
//    else if (n >= 60 && n < 70) {
//        printf("D\n");
//    }
//    else if (n >= 0 && n < 60) {
//        printf("E\n");
//    }
//    else {
//        printf("F\n");
//    }
//
//    return 0;
//}


////BC126 小乐乐算多少人被请家长
//#include<stdio.h>
//int main()
//{
//	int arr[100][4];
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		int a = 0.0;
//		for (int j = 0; j < 3; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			sum += arr[i][j];
//		}
//		a = sum / 3;
//		arr[i][3] = a;
//		sum = 0;
//	}
//
//	int count = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i][3] < 60.0)
//		{
//			count = count + 1;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

////BC127 小乐乐算最高分
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int* arr = (int*)malloc(n * sizeof(int));
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = 0; j < n - 1 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	printf("%d", arr[0]);
//	free(arr);
//	return 0;
//}

////BC128 小乐乐计算求和
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = 1;
//	int sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		a = a * i;
//		sum += a;
//	}
//	printf("%d", sum);
//	return 0;
//}

////BC129 小乐乐计算函数
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	int max_1 = (a + b > b) ? ((a + b > c) ? a + b : c) : ((b > c) ? b : c);
//	int max_3 = (a > b + c) ? ((a > c) ? a : c) : ((b + c > c) ? b + c : c);
//	int max_2 = (a > b) ? ((a > c + b) ? a : c + b) : ((b > c + b) ? b : c + b);
//	float answer = ((float)max_1) / ((float)max_2 + (float)max_3);
//	printf("%.2f", answer);
//	return 0;
//}

////BC130 小乐乐查找数字
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int n = 0;
//	int b = 0;
//	scanf("%d", &n);
//	
//	int* arr = (int*)malloc(n * sizeof(int));
//
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &b);
//	int count = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] == b)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	free(arr);
//	return 0;
//}

////BC131 KiKi学程序设计基础
//#include<stdio.h>
//int main()
//{
//    printf("printf(\"Hello world!\\n\");\n");
//    printf("cout << \"Hello world!\" << endl;");
//    return 0;
//}

////BC132 KiKi算期末成绩
//#include<stdio.h>
//int main()
//{
//	int a, b, c, d;
//	scanf("%d%d%d%d", &a, &b, &c, &d);
//	float e = a * 0.2 + b * 0.1 + c * 0.2 + d * 0.5;
//	printf("%.1f", e);
//	return 0;
//}

////BC133 KiKi说祝福语
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		printf("Happy new year!Good luck!\n");
//	}
//	return 0;
//}

////BC134 KiKi的最高分
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	int d = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
//	printf("%d", d);
//	return 0;
//}

////BC135 KiKi求质数个数
#include<stdio.h>
#include<math.h>
int main()
{
	int count = 0;
	for (int i = 101; i < 1000; i += 2)
	{
		int a = 1;
		for (int j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				a = 0;
				break;
			}
		}
		if (a == 1)
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}

////BC136 KiKi去重整数并排序
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int* arr = (int*)malloc(n * sizeof(int));
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = 0; j < n - 1 - i; j++)
//		{
//			if (arr[j] == arr[j + 1])
//			{
//				arr[j + 1] = 0;
//			}
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] != 0)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}

////BC137 KiKi判断上三角矩阵
//#include<stdio.h>
//int main()
//{
//	int arr[11][11] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int count = 0;
//	for (int i = 1; i < n; i++)// 1 2
//	{
//		for (int j = 0; j < i; j++)
//		{
//			if (arr[i][j] != 0)
//			{
//				count = 1;
//				break;
//			}
//		}
//		if (count == 1)
//		{
//			break;
//		}
//	}
//	if (count == 1)
//	{
//		printf("NO\n");
//	}
//	else
//	{
//		printf("YES\n");
//	}
//	return 0;
//}









