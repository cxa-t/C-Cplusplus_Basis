#define _CRT_SECURE_NO_WARNINGS 1

//https://www.nowcoder.com/ta/beginner-programmers-v1

////BC12 �ַ�ʥ����
//#include <stdio.h>
//
//int main() {
//    char a;
//    scanf("%c", &a);
//    for (int i = 1; i <= 5; i++)
//    {
//        for (int j = 5 - i; j > 0; j--)
//        {
//            printf(" ");
//        }
//        for (int m = 1; m <= i; m++)
//        {
//            printf("%c ", a);
//        }
//        printf("\n");
//
//    }
//    return 0;
//}

////BC14 ���������������
//#include <stdio.h>
//int main()
//{
//	int value;
//	scanf("%d", &value);
//	if (value > 10000000)
//	{
//		printf("year=%d\n", value / 10000);
//		value %= 10000;
//		printf("month=%02d\n", value / 100);
//		printf("date=%02d\n", value % 100);
//	}
//	else if (value > 1000000 && value < 9999999)
//	{
//		printf("year=%d\n", value / 1000);
//		value %= 1000;
//		printf("month=%02d\n", value / 100);
//		printf("date=%02d\n", value % 100);
//	}
//	else if (value > 100000 && value < 999999)
//	{
//		printf("year=%d\n", value / 100);
//		value %= 100;
//		printf("month=%02d\n", value / 10);
//		printf("date=%02d\n", value % 10);
//
//	}
//	
//	return 0;
//}

////BC28 ��Сдת��
//
////����ת������-->С��
//#include<stdio.h>
//int my_toupper(int ch)
//{
//	if (ch >= 97 && ch <= 122)
//		return ch - 32;
//	else
//		return ch;
//}
//
//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//	ch = my_toupper(ch);
//	printf("%c", ch);
//
//	return 0;
//}
//
//
////��������ת������תС��
//#include <stdio.h>
//
//int main() {
//    char ch;
//    while (scanf("%c", &ch) != EOF)
//    {
//        getchar();
//        printf("%c\n", ch + 32);
//    }
//    return 0;
//}

////BC29 2��n�η�����
//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int a = 1 << n;
//	int b = 1 >> n;
//	printf("%d %d\n", a, b);
//	return 0;
//}

////BC30 KiKi������
//#include <stdio.h>
//
//int main() {
//    int n = 0;
//    int h = 0;
//    int m = 0;
//    scanf("%d %d %d", &n, &h, &m);
//    int s = n - (m / (float)h);
//    printf("%d\n", s);
//    return 0;
//}

////BC31 ������Ϣ
//#include <stdio.h>
//
//int main() {
//    printf("I lost my cellphone!");
//    return 0;
//}

////BC32 ���ѧ����Ϣ
//#include <stdio.h>
//
//int main() {
//    printf("Name    Age    Gender\n");
//    printf("---------------------\n");
//    printf("Jack    18     man\n");
//
//    return 0;
//}

////BC33 ����ƽ���ɼ�
//#include <stdio.h>
//
//int main() {
//    int a, b, c, d, e;
//    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
//    printf("%.1f", (a + b + c + d + e) / 5.0);
//    return 0;
//}

////BC34 ����A+B
//#include <stdio.h>
//
//int main() {
//    int a, b;
//    scanf("0x%x 0%o", &a, &b);
//    printf("%d\n", a + b);
//    return 0;
//}

//BC35 �ж���ĸ
//#include<stdio.h>
//
//int yes_or_no(int n)
//{
//	if (n >= 65 && n <= 122)
//		return 1;
//	else
//		return -1;
//}
//
//int main()
//{
//	char a;
//	scanf("%c", &a);
//	int b = yes_or_no(a);
//	if (b == 1)
//		printf("YES");
//	else
//		printf("NO");
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//    char ch = 0;
//    while (scanf("%c", &ch) != EOF)
//    {
//        getchar();
//        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//            printf("YES\n");
//        else
//            printf("NO\n");
//    }
//    return 0;
//}

////BC36 ��������
//#include <stdio.h>
//
//int main() {
//    int a = 0;
//    float b = 0.0;
//    scanf("%d %f", &a, &b);
//    //printf("%d\n", a);
//    //printf("%f\n", b);
//    float bmi = a / (b * b);
//    if (bmi >= 18.5 && bmi <= 23.9)
//    {
//        //printf("%f\n", bmi);
//        printf("Normal\n");
//    }
//    else
//    {
//        //printf("%f\n", bmi);
//        printf("Abnormal\n");
//    }
//    return 0;
//}

////BC37 ����
//#include <stdio.h>
//
//int main() {
//    float a = 0.0;
//    int b, c, d;
//    scanf("%f %d %d %d", &a, &b, &c, &d);
//    if ((b == 11 && c == 11))
//    {
//        if (d == 1)
//        {
//            float f = a * 0.7 - 50;
//            if (f < 0)
//            {
//                float f = 0.0;
//                printf("%.2f", f);
//            }
//            else
//            {
//                printf("%.2f", f);
//            }
//        }
//        else if (d == 0)
//        {
//            float f = a * 0.7;
//            printf("%.2f", f);
//        }
//    }
//    else if ((b == 12 && c == 12))
//    {
//        if (d == 1)
//        {
//            float f = a * 0.8 - 50;
//            if (f < 0)
//            {
//                float f = 0.0;
//                printf("%.2f", f);
//            }
//            else
//            {
//                printf("%.2f", f);
//            }
//        }
//        else if (d == 0)
//        {
//            float f = a * 0.8;
//            printf("%.2f", f);
//        }
//    }
//    return 0;
//}
//

////BC38 ����ˮ�ɻ�
//#include <stdio.h>
//
//int main() {
//    for (int a = 10000;a<100000;a++)
//    {
//        int b = a / 10000;
//        int c = a % 10000;
//        int d = a / 1000;
//        int e = a % 1000;
//        int f = a / 100;
//        int g = a % 100;
//        int h = a / 10;
//        int i = a % 10;
//        if (a == b * c + d * e + f * g + h * i)
//        {
//            printf("%d ", a);
//        }
//    }
//    return 0;
//}

//BC39 ����ǰ����
//���У���һ������һ����������ʾn��ѧ����>=5��
//�ڶ�������n��ѧ���ɼ���������ʾ����Χ0~100�����ÿո�ָ���
//�����һ�У�����ɼ���ߵ�ǰ������ÿո�ָ���
//#include <stdio.h>
//#include <stdlib.h>
//
//
//int main() {
//    int a = 0;
//    scanf("%d", &a);
//    printf("����������Ԫ�أ�");
//
//    int* arr = (int*)malloc(a * sizeof(int)); // ��̬�����СΪa����������
//    
//    for (int i = 0; i < a; i++) {
//        scanf("%d", &arr[i]);
//    }
//
//    printf("������������ǣ�");
//    for (int i = 0; i < a; i++) {
//        printf("%d ", arr[i]);
//    }
//    
//    //int i, j, min,temp;
//    //for (i = 0; i < a-1; i++)
//    //{
//    //    min = i;
//    //    for ( j = i+1; j < a; j++)
//    //    {
//    //        if (arr[j] < arr[min])
//    //            min = j;
//    //    }
//    //    temp = arr[min];
//    //    arr[min] = arr[i];
//    //    arr[i] = temp;   
//    //}
//
//
//    int i, j, max, temp;
//    for (i = 0; i < a - 1; i++)
//    {
//        max = i;
//        for (j = i + 1; j < a; j++)
//        {
//            if (arr[j] > arr[max])
//            {
//                max = j;
//            }
//            
//        }
//        temp = arr[i];
//        arr[i] = arr[max];
//        arr[max] = temp;
//    }
//
//    printf("\n");
//    printf("�ϴ��ǰ�������Ԫ��Ϊ��");
//    for (i = 0; i < 5; i++)
//        printf("%d ", arr[i]);
//
//    free(arr); // �ͷŶ�̬������ڴ�
//
//    return 0;
//}

////BC39 ����ǰ����
//#include <stdio.h>
//
//int main() {
//    int n = 0;
//    scanf("%d", &n);
//    int arr[40];
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//    int i, j, max, temp;
//    for (i = 0; i < n - 1; i++)
//    {
//        max = i;
//        for (j = i + 1; j < n; j++)
//        {
//            if (arr[j] > arr[max])
//            {
//                max = j;
//            }
//
//        }
//        temp = arr[i];
//        arr[i] = arr[max];
//        arr[max] = temp;
//    }
//    for (int i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

////BC40 ��ѡ�糤
//#include <stdio.h>
//
//int main() {
//    char arr[100] = "";
//    scanf("%s", arr);
//
//    int len = 0;
//    while (arr[len] != '\0') { // �����ַ�������
//        len++;
//    }
//
//    int count = 0;
//    for (int i = 0; i < len; i++) {
//        if (arr[i] == 65) {
//            count++;
//        }
//        else if (arr[i] == 66) {
//            count--;
//        }
//    }
//
//    if (count == 0) {
//        printf("E\n");
//    }
//    else if (count > 0) {
//        printf("A\n");
//    }
//    else {
//        printf("B\n");
//    }
//
//    return 0;
//}

////BC41 ���������
//#include <stdio.h>
//
//int main() {
//    int a = 0;
//    scanf("%d", &a);
//    if (a >= 140)
//    {
//        printf("Genius\n");
//    }
//    else {
//        printf("NO_Genius\n");
//    }
//    return 0;
//}

////BC42 �����ɼ�
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) != EOF)
//	{
//		if (a >= 90 && a <= 100)
//			printf("Perfect\n");
//		else
//			printf("NO_Perfect\n");
//	}
//	return 0;
//}

////BC43 �������
//#include <stdio.h>
//
//int main() {
//    int a = 0;
//    while (scanf("%d", &a) != EOF)
//    {
//        if (a >= 60)
//        {
//            printf("Pass\n");
//        }
//        else
//        {
//            printf("Fail\n");
//        }
//
//    }
//    return 0;
//}

////BC44 �ж�������ż��
//#include <stdio.h>
//
//int main() {
//    int a = 0;
//    while (scanf("%d", &a) != EOF)
//    {
//        if (a % 2 == 0)
//        {
//            printf("Even\n");
//        }
//        else if (a % 2 == 1)
//        {
//            printf("Odd\n");
//        }
//
//    }
//    return 0;
//}
//

//////BC45 ��߷���
//#include <stdio.h>
//int main() {
//    int arr[3];
//    for (int i = 0; i < 3; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int len = sizeof(arr) / sizeof(arr[0]);
//    int i, j, max, temp;
//    for (i = 0; i < len - 1; i++)
//    {
//        max = i;
//        for (j = i + 1; j < len; j++)
//        {
//            if (arr[j] > arr[max])
//            {
//                max = j;
//            }
//        }
//        temp = arr[i];
//        arr[i] = arr[max];
//        arr[max] = temp;
//    }
//    printf("%d", arr[0]);
//    return 0;
//}

////BC46 �ж���Ԫ�����Ǹ���
//#include <stdio.h>
//
//int main() {
//    char a;
//    while (scanf("%c", &a) != EOF)
//    {
//        if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
//        {
//            printf("Vowel\n");
//
//        }
//        else {
//            printf("Consonant\n");
//        }
//        getchar();
//    }
//    return 0;
//}

////BC47 �ж��ǲ�����ĸ
//#include<stdio.h>
//int main()
//{
//    char a;
//    while (scanf("%c\n", &a) != EOF)
//    {
//        if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
//            printf("%c is an alphabet.\n", a);
//        else
//            printf("%c is not an alphabet.\n", a);
//    }
//    return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	char a;
//	while (scanf("%c\n", &a) != EOF)
//	{
//		if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
//		{
//			printf("%c is an alphabet.", a);
//		}
//		else
//		{
//			printf("%c is not an alphabet.", a);
//		}
//	}
//	return 0;
//}
//

////BC48 ��ĸ��Сдת��
//#include<stdio.h>
//int main()
//{
//	char a;
//	while (scanf("%c", &a) != EOF)
//	{
//		if (a >= 65 && a <= 90)
//		{
//			printf("%c\n", a + 32);
//		}
//		else if (a >= 97 && a <= 122)
//		{
//			printf("%c\n", a - 32);
//		}
//	}
//	return 0;
//}
//

////BC49 �ж��������Ĵ�С��ϵ
//#include <stdio.h>
//
//int main() {
//    int a, b;
//    while (scanf("%d %d", &a, &b) != EOF) { 
//        if (a > b)
//            printf("%d>%d\n", a, b);
//        else if (a < b)
//            printf("%d<%d\n", a, b);
//        else
//            printf("%d=%d\n", a, b);
//    }
//    return 0;
//}

////BC50 ���㵥λ��Ծ����
//#include <stdio.h>
//
//int main() {
//    int a;
//    while (scanf("%d", &a) != EOF) { 
//        if (a > 0)
//            printf("1\n");
//        else if (a == 0)
//            printf("0.5\n");
//        else
//            printf("0\n");
//    }
//    return 0;
//}

////BC51 �������ж�
//#include <stdio.h>
//
//int main() {
//    int a, b,c;
//    while (scanf("%d %d %d", &a, &b, &c) != EOF) {
//        if (a + b > c && a + c > b && b + c > a && a - b < c && a - c < b && b - c < a)
//        {
//            if (a == b && a == c && b == c)
//                printf("Equilateral triangle!\n");
//            else if (a == b || a == c || b == c)
//                printf("Isosceles triangle!\n");
//            else
//                printf("Ordinary triangle!\n");
//        }
//        else
//            printf("Not a triangle!");
//    }
//    return 0;
//}

////BC52 �����������ݳ̶�
//#include <stdio.h>
//
//int main() {
//    int a = 0;
//    float b = 0.0;
//    while (scanf("%d %f", &a, &b) != EOF) 
//    {
//        b /= 100.0;
//        float bmi = a / (b*b);
//        if (bmi < 18.5)
//        {
//            printf("Underweight\n");
//        }
//        else if (bmi >= 18.5 && bmi <= 23.9)
//        {
//            printf("Normal\n");
//        }
//        else if (bmi > 23.9 && bmi <= 27.9)
//        {
//            printf("Overweight\n");
//        }
//        else
//        {
//            printf("Obese\n");
//        }
//    }
//    return 0;
//}
//

#include<stdio.h>
int main()
{
	int a = 80;
	float b = 170;
	b /= 100.0;
	float bmi = a / (b * b);
	printf("%f", bmi);
	return 0;
}



