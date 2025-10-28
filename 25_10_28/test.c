#define _CRT_SECURE_NO_WARNINGS 1

//https://www.nowcoder.com/ta/beginner-programmers-v1

//#include <stdio.h>
//int main() {
//    int a = 0;
//    scanf("%d", &a);
//    float b;
//    b = (a * 0.9 * 0.9 * 0.9);
//    printf("%d\n", (int)b);
//    return 0;
//}

////BC64 K形图案
//#include <stdio.h>
//
//int main() {
//    int a = 0;
//    while (scanf("%d", &a) != EOF) {
//        for (int i = 0; i < a+1; i++)//1 2 3 4
//        {
//            for (int j = a-i+1; j >0; j--)//3 2 1
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//        for (int k = 0; k < a ; k++)//1 2
//        {
//            for (int j = a-k-1; j < a+1; j++)//2 3 
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//
//    }
//    return 0;
//}

////BC65 箭形图案
//#include <stdio.h>
//
//int main() {
//    int a;
//    while (scanf("%d", &a) != EOF) {
//        for (int i = 0; i < a + 1; i++)//1 2 3 
//        {
//            for (int j = i; j < a ; j++)// 1 2
//            {
//                printf("  ");
//            }
//            //for (int k = a-i+1; k > 0;k--)// 1 2 3
//            //{
//            //    printf("*");
//            //}
//            for (int k = 0;k<i+1;k++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//        for (int i = 0; i < a; i++)//1 2 
//        {
//            for (int j = 0; j  < i+1; j++)//1 2
//            {
//                printf("  ");
//            }
//            for (int k = i; k < a; k++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

////BC69 空心正方形图案
//#include <stdio.h>
//
//int main() {
//    int a;
//    while (scanf("%d", &a) != EOF)
//    {
//        for (int i = 0; i < a; i++)//0 1 2 3
//        {
//            for(int j = 0; j < a; j++)
//            {
//                //printf("* ");
//                if (i == 0 || i == a - 1 || j == 0 || j == a - 1)
//                    printf("* ");
//                else
//                    printf("  ");
//            }
//            printf("\n");
//        }
//
//    }
//    return 0;
//}

////BC70 空心三角形图案
//#include <stdio.h>
//int main()
//{
//    int n;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i, j;
//        for (i = 1; i <= n; i++)//1 2 3 4
//        {
//            for (j = 1; j <= n; j++)//1 2 3 4
//            {
//                if (j == 1 || i == n || i == j)
//                {
//                    printf("* ");
//                }
//                else
//                {
//                    printf("  ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

////BC79 图像相似度
//#include <stdio.h>
//
//int main() {
//    int a, b,i,j,m,n; 
//    int arr[100][100];
//    int brr[100][100];
//
//    scanf("%d %d", &a, &b);
//
//    int count=0,sum=0;
//
//    for (int i = 0; i < a; i++)
//    {
//        for (int j = 0; j < b; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (int i = 0; i < a; i++)
//    {
//        for (int j = 0; j < b; j++)
//        {
//            scanf("%d", &brr[i][j]);
//        }
//    }
//
//    for (int i = 0; i < a; i++)
//    {
//        for (int j = 0; j < b; j++)
//        {
//            sum++;
//            if (arr[i][j] == brr[i][j])
//            {
//                count++;
//            }
//        }
//    }
//    printf("%.2f", (float)(count / (float)sum)*100);
//    return 0;
//}

////BC80 登录验证
//#include <stdio.h>
//#include<string.h>
//int main() {
//    char a[10], b[10];
//    while (scanf("%s %s", &a, &b) != EOF) {
//        if (strcmp(&a, "admin") == 0)
//        {
//            if (strcmp(&b, "admin") == 0)
//            {
//                printf("Login Success!\n");
//            }
//            else 
//            {
//                printf("Login Fail!\n");
//            }
//        }
//        else 
//        {
//            printf("Login Fail!\n");
//        } 
//    }
//    return 0;
//}

////BC81 学好C++
//#include <stdio.h>
//
//int main() {
//    printf("I will learn C++ well!\n");
//    return 0;
//}

////BC82 (a+b-c)*d的计算问题
//#include <stdio.h>
//
//int main() {
//    int a, b, c, d;
//    scanf("%d %d %d %d", &a, &b, &c, &d);
//    printf("%d\n", (a + b - c) * d);
//    return 0;
//}

////BC83 被5整除问题
//#include <stdio.h>
//
//int main() {
//    int a;
//    scanf("%d", &a);
//    if (a % 5 == 0)
//    {
//        printf("YES\n");
//    }
//    else {
//        printf("NO\n");
//    }
//    return 0;
//}

////BC84 计算y的值
//#include <stdio.h>
//int fun(int a)
//{
//    int result;
//    if (a < 0)
//        result = 1;
//    else if (a == 0)
//        result = 0;
//    else
//        result = -1;
//    return result;
//}
//int main() {
//    int a = 0;
//    scanf("%d", &a);
//    int b = fun(a);
//    printf("%d\n", b);
//    return 0;
//}

//BC85 包含数字9的数
#include<stdio.h>
int main()
{
	int count = 0;
	for (int i = 1; i < 2020; i++)
	{
		int a, b, c, d;
		a = i / 1000;
		b = i % 1000 / 100;
		c = i % 1000 % 100 / 10;
		d = i % 1000 % 100 % 10;

		if (a == 9 || b == 9 || c == 9 || d==9)
		{
			//printf("%d ", i);
			count++;
		}
	}
	printf("%d", count);
	return 0;
}

