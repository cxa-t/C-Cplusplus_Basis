#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,3,7,9,22 };
//	int brr[] = { 2,8,10,17,33,44 };
//	int lena = sizeof(arr) / sizeof(arr[0]);
//	int lenb = sizeof(brr) / sizeof(brr[0]);
//	int len = lena + lenb;
//	int crr[15];
//
//	for (int i = 0; i < len; i++)
//	{
//		if (i < lena)
//		{
//			crr[i] = arr[i];
//		}
//		else
//		{
//			crr[i] = brr[i - lena];
//		}
//	}
//
//	//对数组进行冒泡排序
//	int len1 = sizeof(crr) / sizeof(crr[0]);
//	for (int i = 0; i < len1-1; i++)
//	{
//		for (int j = 0; j < len1-i-1; j++)
//		{
//			if (crr[j] > crr[j + 1])
//			{
//				int tmp = crr[j];
//				crr[j] = crr[j + 1];
//				crr[j + 1] = tmp;
//			}
//		}
//	}
//
//	for (int i = 0; i < len1; i++)
//	{
//		printf("%d ", crr[i]);
//	}
//	return 0;
//}

////BC78 筛选法求素数
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = 0;
//	for (int i = 2; i <= n; i++)
//	{
//		int flag = 1;
//
//		for (int j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n%d", n - count -1);
//	return 0;
//}

////BC77 有序序列插入一个数//BC88 有序序列插入一个数//BC97 有序序列插入一个整数
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[51] = { 0 };
//	for (int i = 0; i < n+1; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//
//	for (int i = 0; i < n + 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

////BC96 有序序列判断
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[51] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	int flag = 1;
//	int num = 1;
//	for (int i = 0; i < n-1; i++)
//	{
//		for (int j = 0; j < n - i-1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				flag = 0;
//				break;
//			}
//		}
//	}
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = 0; j < n - i - 1; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				num = 0;
//				break;
//			}
//		}
//	}
//
//	if (flag == 1||num == 1)
//	{
//		printf("sorted\n");
//	}
//	else
//	{
//		printf("unsorted\n");
//	}
//	return 0;
//}

////BC98 序列中删除指定数字
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[51] = { 0 };
//	for(int i=0;i<n+1;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] == arr[n])
//		{
//			arr[i] = 0;
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

////BC99 序列中整数去重
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[5000] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		int flag = 1;
//		for (int j = 0; j < i; j++)
//		{
//			if (arr[j] == arr[i])
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	//for (int i = 0; i < n; i++)
//	//{
//	//	if (arr[i] != 0)
//	//	{
//	//		printf("%d ", arr[i]);
//	//	}
//	//}
//	return 0;
//}

////BC100 有序序列合并
//#include<stdio.h>
//int main()
//{
//	int m, n;
//	scanf("%d%d", &m, &n);
//	int arr[2001] = { 0 };
//	int len = m + n;
//	for (int i = 0; i < len; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < len - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

////BC101 班级成绩输入输出
//#include<stdio.h>
//int main()
//{
//	float arr[5][6];
//	for (int i = 0; i < 5; i++)
//	{
//		float sum = 0.0;
//		for (int j = 0; j < 5; j++)
//		{
//			scanf("%f", &arr[i][j]);
//			sum += arr[i][j];
//		}
//		arr[i][5] = sum;
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 6; j++)
//		{
//			printf("%.1f ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


////BC102 矩阵元素定位
//#include<stdio.h>
//int main()
//{
//	int m, n;
//	scanf("%d%d", &m, &n);
//	int arr[6][6];
//	for (int i = 1; i <= m; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int x, y;
//	scanf("%d%d", &x, &y);
//	printf("%d", arr[x][y]);
//	return 0;
//}

////BC103 序列重组矩阵
//#include<stdio.h>
//int main()
//{
//	int m, n;
//	scanf("%d%d", &m, &n);
//	int arr[10][10];
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

////BC104 最高身高
//#include<stdio.h>
//int main()
//{
//	int n, m;
//	scanf("%d%d", &n, &m);
//	int arr[10][10];
//	int x=0, y=0;
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			if (arr[x][y] < arr[i][j])
//			{
//				x = i;
//				y = j;
//			}
//		}
//	}
//	printf("%d %d", x + 1, y + 1);
//	return 0;
//}

////BC105 矩阵相等判定
//#include<stdio.h>
//int main()
//{
//	int n, m;
//	scanf("%d%d", &n, &m);
//	int arr[10][10];
//	int brr[10][10];
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%d", &brr[i][j]);
//		}
//	}
//	int flag = 1;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (arr[i][j] != brr[i][j])
//			{
//				flag = 0;
//				break;
//			}
//		}
//	}
//	if (flag == 0)
//	{
//		printf("No\n");
//	}
//	else
//	{
//		printf("Yes\n");
//	}
//	return 0;
//}

////BC106 上三角矩阵判定
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10][10];
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	int sum = 0;
//	for (int i = 1; i < n; i++)//1 2
//	{
//		for (int j = 0; j < i; j++)
//		{
//			sum += arr[i][j];// 1 0
//		}
//	}
//	
//	//int flag = 1;
//	//for (int i = 0; i < n; i++)
//	//{
//	//	for (int j = i; j < n; j++)//0 1 2   1 2   2
//	//	{
//	//		if (arr[i][j] == 0)
//	//		{
//	//			flag = 0;
//	//			break;
//	//		}
//	//	}
//	//}
//
//	if (sum == 0)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	//printf("%d", sum);
//	return 0;
//}

////BC107 矩阵转置
//#include<stdio.h>
//int main()
//{
//	int n, m;
//	scanf("%d%d", &n, &m);
//	int arr[10][10];
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

////BC108 矩阵交换
//#include<stdio.h>
//int main()
//{
//	int n, m;
//	scanf("%d%d", &n, &m);
//	int arr[10][10];
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	int k = 0;
//	char c;
//	int a, b;
//
//	scanf("%d", &k);
//	for (int i = 0; i < k; i++)
//	{
//		scanf(" %c %d %d", &c, &a, &b);
//	//00 01  --  10 11
//	//10 11  --  00 01
//		if (c == 'r')
//		{
//			for (int j = 0; j < m; j++)
//			{
//				int tmp = arr[a - 1][j];
//				arr[a - 1][j] = arr[b - 1][j];
//				arr[b - 1][j] = tmp;
//			}
//		}
//	//00 01  --  01 00
//	//10 11  --  11 10
//		else if (c == 'c')
//		{
//			for (int i = 0; i < n; i++)
//			{
//				int tmp = arr[i][a - 1];
//				arr[i][a - 1] = arr[i][b - 1];
//				arr[i][b - 1] = tmp;
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//BC109 杨辉三角
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[30][30];
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j >= 0; j--)
		{
			if (i == j || j == 0)
			{
				arr[i][j] = 1;
			}
			else//2 1 = 1 0 + 1 1
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j >= 0; j--)
		{
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

