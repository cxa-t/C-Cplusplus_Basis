#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//    printf("%5d\n", 123456);
//    return 0;
//}

//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}

//int main()
//{
//	printf("%d", 5 % -3);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 3; i < 101; i += 3)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main() 
//{
//    int a;
//    while (scanf("%d", &a) != EOF) 
//    {   // 注意 while 处理多个 case
//        // 64 位输出请用 printf("%lld") to 
//        while (a)
//        {
//            printf("*");
//            a--;
//        }
//        printf("\n");
//    }
//    return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	int max = (a > b ? a : b) > c ? (a > b ? a : b) : c;
//	int min = (a < b ? a : b) < c ? (a < b ? a : b) : c;
//	printf("%d %d %d", max, a + b + c - max - min, min);
//	return 0;
//}

//int main() 
//{
//	int a;
//	while (scanf("%d", &a) != EOF) { // 注意 while 处理多个 case
//		// 64 位输出请用 printf("%lld") to 
//		while (a)
//		{
//			printf("*");
//			a--;
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main() 
//{
//	int x = 3;
//	int y = 3;
//	switch (x % 2) 
//	{
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}

//int is_triangle(int a, int b, int c)
//{
//    if ((a + b > c) && (a + c > b) && (b + c > a))
//        return 1;
//    else
//        return 0;
//}
//
//int judge_angle(int a, int b, int c)
//{
//    if (a == b && a == c && b == c)
//        return 2;
//    else if (a == b || a == c || b == c)
//        return 1;
//    else
//        return 0;
//}
//
//int main() 
//{
//    int a, b, c;
//    while (scanf("%d %d %d", &a, &b, &c) != EOF) // 注意 while 处理多个 case
//    { 
//        if (is_triangle(a, b, c))
//        {
//            switch (judge_angle(a, b, c))
//            {
//            case 0:
//                printf("Ordinary triangle!\n");
//                break;
//            case 1:
//                printf("Isosceles triangle!\n");
//                break;
//            case 2:
//                printf("Equilateral triangle!\n");
//                break;
//            }
//        }
//        else
//            printf("Not a triangle!\n");
//    }
//    return 0;
//}

//int main()
//{
//	int i = 0;
//	float sum = 0.0f;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//			sum += 1.0 / i;
//		else
//			sum -= 1.0 / i;
//	}
//	printf("%f", sum);
//	return 0;
//}

//int count_9(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		if (a % 10 == 9)
//			count++;
//		a /= 10;
//	}
//	return count;
//}
//
//int main()
//{
//	int i = 0;
//	int num = 0;
//	for (i = 1; i < 101; i++)
//	{
//		num += count_9(i);
//	}
//	printf("%d", num);
//	return 0;
//}

//int is_leap(int year)
//{
//	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
//}
//
//int main()
//{
//	int  i = 0;
//	for (i = 1000; i < 2001; i++)
//	{
//		if (is_leap(i))
//			printf("%d ", i);
//	}
//	return 0;
//}

int main()
{
	int i = 0;
	int num = 0;
	int max = 0;
	for (i = 1; i < 11; i++)
	{
		scanf("%d", &num);
		if (max <= num)
			max = num;
	}
	printf("%d", max);
	return 0;
}
