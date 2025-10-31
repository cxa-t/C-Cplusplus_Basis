#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) 
//			break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//void menu()
//{
//	printf("*******************\n");
//	printf("****  1.play  *****\n");
//	printf("****  0.exit  *****\n");
//	printf("*******************\n");
//}
//
//void game()
//{
//	int res = rand() % 100 + 1;
//	int count = 5;
//	int ans = 0;
//
//	while (count)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &ans);
//		if (ans == res)
//		{
//			printf("恭喜你！猜对了！\n");
//			break;
//		}
//		else if (ans > res)
//			printf("猜大了\n");
//		else
//			printf("猜小了\n");
//		count--;
//	}
//	if (count == 0)
//	{
//		printf("你没有机会了！正确数字应该是%d\n", res);
//	}
//}
//
//int main()
//{
//	int choice = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &choice);
//		game();
//
//	} while (choice);
//	return 0;
//}


//int main()
//{
//	char acX[] = "abcdefg";
//	char acY[] = { 'a','b','c','d','e','f','g' };
//	printf("%zd\n", sizeof(acY));
//	printf("%zd\n", sizeof(acX));
//	printf("%d\n", strlen(acY));
//	printf("%d\n", strlen(acX));
//
//	return 0;
//}

//int main()
//{
//    int arr[] = { 1,2,(3,4),5 };
//    printf("%d\n", sizeof(arr));
//    return 0;
//}

//int main()
//{
//    char str[] = "hello bit";
//    printf("%d %d\n", sizeof(str), strlen(str));
//    return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//#include <math.h>
//int is_prime(int num)
//{
//	for (int i = 2; i <= sqrt(num); i++)
//	{
//		if (num % i == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i < 201; i++)
//	{
//		if (is_prime(i))
//			printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	scanf("%d %d", &a, &b);
//
//	while (b)
//	{
//		int temp = b;
//		b = a % b;
//		a = temp;
//	}
//	printf("%d", a);
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= n; j++)
//			{
//				if (i == j || i + j == n + 1)
//					printf("*");
//				else
//					printf(" ");
//			}
//			puts(" ");
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= n; j++)
//			{
//				if (i == 1 || i == n || j == 1||j==n)
//					printf("* ");
//				else
//					printf("  ");
//			}
//			puts(" ");
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int row = 0;
//	int col = 0;
//	scanf("%d %d", &row, &col);
//	int a[10][10] = { 0 };
//	for (int i = 0; i < row; i++)
//		for (int j = 0; j < col; j++)
//			scanf("%d", &a[i][j]);
//	for (int i = 0; i < col; i++)
//	{
//		for (int j = 0; j < row; j++)
//		{
//			printf("%d ", a[j][i]);
//		}	
//		puts(" ");
//	}
//	return 0;
//}


int main()
{
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);
	int a[1001] = { 0 };
	int b[1001] = { 0 };

	for (int i = 0; i < m; i++)
		scanf("%d", &a[i]);
	for (int i = 0; i < n; i++)
		scanf("%d", &b[i]);

	int c[2001] = { 0 };
	int i = 0;
	int j = 0;
	int k = 0;
	while (i < m && j < n)
	{
		if (a[i] <= b[j])
			c[k++] = a[i++];
		else
			c[k++] = b[j++];
	}
	while(i<m)
		c[k++] = a[i++];
	while (j < n)
		c[k++] = b[j++];
	for (int i = 0; i < k; i++)
		printf("%d ", c[i]);
	return 0;
}


//int main()
//{
//	int sum = 0;
//	int num = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &num);
//		sum += num;
//	}
//	printf("%f", sum / 10.0);
//
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a[1001] = { 0 };
//	int b[1001] = { 0 };
//
//	for (int i = 0; i < n; i++)
//		scanf("%d", &a[i]);
//	for (int i = 0; i < n; i++)
//		scanf("%d", &b[i]);
//
//	for (int i = 0; i < n; i++)
//	{
//		int temp = a[i];
//		a[i] = b[i];
//		b[i] = temp;
//	}
//
//	for (int i = 0; i < n; i++)
//		printf("%d ", a[i]);
//	puts(" ");
//	for (int i = 0; i < n; i++)
//		printf("%d ", b[i]);
//	
//	return 0;
//}