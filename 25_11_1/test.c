#define _CRT_SECURE_NO_WARNINGS

//https://www.nowcoder.com/ta/beginner-programmers-v1

////BC86 奇偶统计
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int count = 0;
//	int count1=0;
//	scanf("%d", &a);
//	for (int i = 1; i <= a; i++)
//	{
//		if (i % 2 == 0)
//		{
//			count++;
//		}
//		else
//		{
//			count1++;
//		}
//	}
//	printf("%d %d", count1, count);
//	return 0;
//}

////BC87 统计成绩
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a = 0;
//
//	scanf("%d", &a);
//
//	double* arr = (double*)malloc(a * sizeof(double)); // 动态分配大小为a的浮点数数组
//	//printf("请输入数组元素：");
//	for (int i = 0; i < a; i++)
//	{
//		scanf("%lf", &arr[i]);
//	}
//
//	//printf("输入的数组元素为：");
//	//for (int i = 0; i < a; i++)
//	//{
//	//	printf("%f ", arr[i]);
//	//}
//
//	int i, j, min;
//	double temp;
//	for (int i = 0; i < a-1; i++)
//	{
//		min = i;
//		for (int j = 1+i; j < a; j++)
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
//	double sum = 0.0;
//	//printf("\n排序后的数组为：");
//	for (i = 0; i < a; i++)
//	{
//		//printf("%f ", arr[i]);
//		sum += arr[i];
//	}
//	//printf("%.2lf\n", sum);
//	printf("%.2lf %.2lf %.2lf",arr[a-1],arr[0], sum/(double)a);
//	free(arr);
//	return 0;
//}

////BC89 密码验证
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char a[100], b[100];
//    while (scanf("%s %s", a, b) != EOF)
//    {
//        if (strcmp(a, b) == 0)
//        {
//            printf("same\n");
//        }
//        else
//        {
//            printf("different\n");
//        }
//    }
//    return 0;
//}

////BC90 矩阵计算
//#include<stdio.h>
//int main()
//{
//	int a, b, arr[10][10];
//	int sum = 0;
//	scanf("%d %d", &a, &b);
//	for (int i = 0; i < a; i++)
//	{
//		for (int j = 0; j < b; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			if (arr[i][j] >= 0)
//			{
//				sum += arr[i][j];
//			}
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}

////BC91 成绩输入输出问题
//#include<stdio.h>
//int main()
//{
//	int a[10];
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for(int j =0;j<10;j++)
//	{
//		printf("%d ", a[j]);
//	}
//	return 0;
//}


////BC92 逆序输出
//#include<stdio.h>
//int main()
//{
//	int a[10];
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for(int j =9;j>=0;j--)
//	{
//		printf("%d ", a[j]);
//	}
//	return 0;
//}

//BC93 统计数据正负个数
#include<stdio.h>
int main()
{
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}

	int count = 0;
	int count1 = 0;
	for (int j = 0; j < 10; j++)
	{
		//printf("%d ", a[j]);
		if (a[j] > 0)
		{
			count++;
		}
		else if (a[j] < 0)
		{
			count1++;
		}
	}
	printf("positive:%d\n", count);
	printf("negative:%d\n", count1);
	return 0;
}

////BC94 N个数之和
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//
//	int* arr = (int*)malloc(a * sizeof(int));
//
//	for (int i = 0; i < a; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int sum = 0;
//	for (int j = 0; j < a; j++)
//	{
//		sum += arr[j];
//	}
//	printf("%d", sum);
//	free(arr);
//	return 0;
//}

////BC95 最高分与最低分之差
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//
//	int* arr = (int*)malloc(a * sizeof(int)); // 动态分配大小为a的整型数组
//	//printf("请输入数组元素：");
//	for (int i = 0; i < a; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	int i, j, min, temp;
//	for (int i = 0; i < a-1; i++)
//	{
//		min = i;
//		for (int j = 1+i; j < a; j++)
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
//	printf("%d",arr[a-1] - arr[0]);
//	free(arr);
//	return 0;
//}




