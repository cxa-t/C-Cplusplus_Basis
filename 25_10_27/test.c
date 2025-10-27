#define _CRT_SECURE_NO_WARNINGS

////BC54 获得月份天数
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	while (scanf("%d %d", &a,&b) != EOF)
//	{
//		if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
//		{
//			//printf("此年是闰年！");
//			if (b == 4 || b == 6 || b == 9 || b == 11)
//			{
//				printf("30\n");
//			}
//			else if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12)
//			{
//				printf("31\n");
//			}
//			else if (b == 2)
//			{
//				printf("29\n");
//			}
//			else
//			{
//				printf("月份输入错误，请重新输入！\n");
//			}
//		}
//		else
//		{
//			if (b == 4 || b == 6 || b == 9 || b == 11)
//			{
//				printf("30\n");
//			}
//			else if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12)
//			{
//				printf("31\n");
//			}
//			else if (b == 2)
//			{
//				printf("28\n");
//			}
//			else
//			{
//				printf("月份输入错误，请重新输入！\n");
//			}
//		}
//	}
//	return 0;
//}

////判断闰年条件
//#include<stdio.h>
//int main()
//{
//	int count = 0;
//	for (int i = 1000; i <= 2000; i++)
//	{
//		
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		
//
//	}
//	printf("共计%d个闰年！", count);
//	return 0;
//}

////BC55 简单计算器
//#include<stdio.h>
//int main()
//{
//	double a, b;
//	char ch;
//	while (scanf("%lf%c%lf", &a, &ch, &b) != EOF)
//	{
//		if (ch != '+' && ch != '-' && ch != '*'&& ch != '/')
//		{
//			printf("Invalid operation!\n");
//		}
//		else if (ch == '+')
//		{
//			printf("%.4lf+%.4lf=%.4lf", a, b, a + b);
//		}
//		else if (ch == '-')
//		{
//			printf("%.4lf-%.4lf=%.4lf", a, b, a - b);
//		}
//		else if (ch == '*')
//		{
//			printf("%.4lf*%.4lf=%.4lf", a, b, a * b);
//		}
//		else if (ch == '/')
//		{
//			if (b == 0.0)
//			{
//				printf("Wrong!Division by zero!\n");
//			}
//			else
//			{
//				printf("%.4lf/%.4lf=%.4lf", a, b, a / b);
//			}
//		}
//	}
//	return 0;
//
//}

////BC56 线段图案
//#include <stdio.h>
//
//int main() {
//    int a;
//    while (scanf("%d", &a) != EOF) { 
//        for (int i = 0; i < a; i++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}

////BC57 正方形图案
//#include <stdio.h>
//
//int main() {
//    int a;
//    while (scanf("%d", &a) != EOF) {
//        for (int i = 0; i < a; i++)
//        {
//            for (int j = 0; j < a; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

////BC58 直角三角形图案
//#include <stdio.h>
//
//int main() {
//    int a;
//    while (scanf("%d", &a) != EOF) { 
//        for (int i = 0; i < a; i++)
//        {
//            for (int j = 0; j < i+1; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

////BC59 翻转直角三角形图案
//#include <stdio.h>
//
//int main() {
//    int a;
//    while (scanf("%d", &a) != EOF) { 
//        for (int i = a; i > 0; i--)
//        {
//            for (int j = 0; j < i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

////BC60 带空格直角三角形图案
//#include <stdio.h>
//
//int main() {
//    int a;
//    while (scanf("%d", &a) != EOF) { 
//        for (int i = 0; i < a; i++)
//        {
//            for (int j = 1; j < a-i; j++)
//            {
//                printf("  ");
//            }
//            for (int j = 0; j < i+1; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

////BC61 金字塔图案
//#include<stdio.h>
//int main() {
//    int a, i, j, g;
//    while (scanf("%d", &a) != EOF) {
//        for (i = 1; i <= a; i++) // 1 2 3 4
//        {
//            for (j = 1; j <= a - i; j++)// 1:1-3 
//                printf(" ");
//            for (g = 1; g <= i; g++)// 1:1
//                printf("* ");
//            printf("\n");
//        }
//    }
//    return 0;
//}

////BC62 翻转金字塔图案
//#include<stdio.h>
//int main() {
//    int a, i, j, g;
//    while (scanf("%d", &a) != EOF) {
//        for (i = 0; i < a; i++) // 1 2 3 4
//        {
//            for (j = 0; j < i; j++)//0:0-3
//                printf(" ");
//            for (g = a-i; g > 0; g--)
//                printf("* ");
//            printf("\n");
//        }
//    }
//    return 0;
//}

////BC63 菱形图案
//#include <stdio.h>
//
//int main() {
//    int a = 0;
//    while (scanf("%d", &a) != EOF) {
//        for (int i = 1; i <= a+1; i++)//1 2 3 4 5
//        {
//            for (int j = a - i + 1; j > 0; j--)
//                printf(" ");
//            for (int k = 0; k < i; k++)
//                printf("* ");
//            printf("\n");
//        }
//        for (int i = 1; i <= a; i++)//1 2 3 
//        {
//            for (int j = 0; j < i; j++)
//                printf(" ");
//            for (int k = a-i+1; k > 0; k--)
//                printf("* ");
//            printf("\n");
//        }
//    }
//    return 0;
//}


////BC66 反斜线形图案
//#include <stdio.h>
//
//int main() {
//    int a;
//    while (scanf("%d", &a) != EOF) { 
//        for (int i = 0; i < a; i++)
//        {
//            for (int j = 0; j < i; j++)
//            {
//                printf(" ");
//            }
//            printf("*\n");
//        }
//    }
//    return 0;
//}

////BC67 正斜线形图案
//#include <stdio.h>
//
//int main() {
//    int a;
//    while (scanf("%d", &a) != EOF) {
//        for (int i = 0; i < a; i++)// 1 2 3 4
//        {
//            for (int j = 1; j < a-i; j++)// 3 2 1 0
//            {
//                printf(" ");
//            }
//            printf("*\n");
//        }
//    }
//    return 0;
//}

////BC68 X形图案
//#include<stdio.h>
//
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n)!=EOF)
//    {
//        int i = 0;
//        int j = 0;
//        for (i = 0; i < n; i++)// 4
//        {
//            for (j = 0; j < n; j++)// 4
//            {
//                if (i == j || j == n -1 - i)//(0,0)(0,3)(1,1)(1,2)
//                {
//                    printf("*");
//                }
//                else
//                {
//                    printf(" ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

////定义分段函数，调用函数计算
//#include <stdio.h>
//
//float fun(int x)
//{
//    float result = 0.0;
//    if (x <= 500)
//        result = 5.5;
//    else if (x > 500 && x <= 2000)
//        result *= 0.02;
//    else if (x > 2000 && x <= 5000)
//    {
//        result = 0.008 * x;
//        result += 24;
//    }
//    else
//        result = 75;
//
//    return result;
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    float result = fun(n);
//    printf("%f", result);
//    return 0;
//}

////BC71 新年快乐
//#include <stdio.h>
//
//int main() {
//    printf("Happy New Year*2019*\n");
//    return 0;
//}

////BC72 平均身高
//#include <stdio.h>
//
//float aver(float a, float b, float c, float d, float e )
//{
//    return (a + b + c + d + e) / 5.0;
//}
//
//
//int main() 
//{
//    float a, b, c, d, e;
//    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
//    float average = aver(a, b, c, d, e);
//    printf("%.2f", average);
//    return 0;
//}

////BC73 挂科危险
////10分以上：很危险(Danger++)，4~9分：危险(Danger)，0~3:Good
//#include <stdio.h>
//
//char* fun(int n)
//{
//    char* result;
//    if (n >= 0 && n <= 3)
//        result = "Good";
//    else if (n >= 4 && n <= 9)
//        result = "Danger";
//    else
//        result = "Danger++";
//    return result;
//}
//int main() 
//{
//    int n;
//    scanf("%d", &n);
//    char* a = fun(n);
//    printf("%s\n", a);
//    return 0;
//}

////BC74 HTTP状态码
//// 200（OK，请求已成功）
//// 202（Accepted，服务器已接受请求，但尚未处理。）
//// 400（Bad Request，请求参数有误）
//// 403（Forbidden，被禁止）
//// 404（Not Found，请求失败）
//// 500（Internal Server Error，服务器内部错误）
//// 502（Bad Gateway，错误网关）
//#include <stdio.h>
//
//int main() {
//    int a;
//    while (scanf("%d", &a) != EOF) { 
//        switch (a)
//        {
//        case 200:printf("OK\n"); break;
//        case 202:printf("Accepted\n"); break;
//        case 400:printf("Bad Request\n"); break;
//        case 403:printf("Forbidden\n"); break;
//        case 404:printf("Not Found\n"); break;
//        case 500:printf("Internal Server Error\n"); break;
//        case 502:printf("Bad Gateway\n"); break;
//
//        default: break;
//        }
//    }
//    return 0;
//}

////BC75 数字三角形
//#include <stdio.h>
//
//int main() {
//    int a;
//    while (scanf("%d", &a) != EOF) {
//        for (int i = 0; i < a; i++)//0 1 2 3  4
//        {
//            for (int j = 0; j < i+1; j++)// 1 2 3 4
//            {
//                printf("%d ", j + 1);
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

////BC76 公务员面试
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a = 7;
//	int* arr = (int*)malloc(a * sizeof(int)); // 动态分配大小为a的整数数组
//
//	while(scanf("%d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3],
//		&arr[4], &arr[5], &arr[6]) != EOF)
//	{
//
//		////printf("请您输入数组：");
//		//for (int i = 0; i < a; i++)
//		//{
//		//	scanf("%d", &arr[i]);
//		//}
//
//		////打印数组元素
//		//printf("您输入的数组为：");
//		//for (int i = 0; i < a; i++)
//		//{
//		//	printf("%d ", arr[i]);
//		//}
//		// 
//		//对数组进行排序
//		int i, j, min, temp;
//		for (i = 0; i < a - 1; i++)
//		{
//			min = i;
//			for (j = i + 1; j < a; j++)
//			{
//				if (arr[j] < arr[min])
//				{
//					min = j;
//				}
//			}
//			temp = arr[i];
//			arr[i] = arr[min];
//			arr[min] = temp;
//		}
//
//		////输出排序后的数组
//		//printf("数组元素从小到大排列顺序为：");
//		//for (int i = 0; i < a; i++)
//		//{
//		//	printf("%d ", arr[i]);
//		//}
//		float sum = 0;
//		int count = 0;
//		for (i = 1; i < 6; i++)
//		{
//			sum += arr[i];
//			count++;
//		}
//		printf("%.2f\n", sum / count);
//
//		free(arr);//释放动态内存
//	}
//	return 0;
//}

//群中求助
#include <stdio.h>

int main() {
    int n = 0;
    int x = 0;
    int y = 0;
    scanf("%d %d %d", &n, &x, &y);
    int s = n - (y / (float)x);
    printf("%d\n", s);
    return 0;
}

////BC77 有序序列插入一个数
////待完成
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//
//	int* arr = (int*)malloc(a * sizeof(int)); // 动态分配大小为a的整数数组
//	printf("请您输入数组：");
//	for (int i = 0; i < a; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	//对数组进行排序
//	int i, j, min, temp;
//	for (i = 0; i < a - 1; i++)
//	{
//		min = i;
//		for (j = i + 1; j < a; j++)
//		{
//			if (arr[j] < arr[min])
//			{
//				min = j;
//			}
//		}
//		temp = arr[i];
//		arr[i] = arr[min];
//		arr[min] = temp;
//	}
//
//	//输出排序后的数组
//	printf("数组元素从小到大排列顺序为：");
//	for (int i = 0; i < a; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	int j = 0;
//	scanf("%d", &j);
//	int* arr = (int*)malloc(j * sizeof(int)); // 动态分配大小为a的整数数组
//
//
//	free(arr);//释放动态内存
//	
//	return 0;
//}


