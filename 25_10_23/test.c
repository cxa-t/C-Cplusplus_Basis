#define _CRT_SECURE_NO_WARNINGS 1

////BC1 ʵ������֪
//#include <stdio.h>
//void output()
//{
//    printf("Practice makes perfect!");
//}
//int main()
//{
//    output();
//
//    return 0;
//}

////BC2 ���Ǵ�V
//#include <stdio.h>
//
//void output()
//{
//    printf("v   v\n");
//    printf(" v v \n");
//    printf("  v  \n");
//
//}
//
//int main()
//{
//    output();
//
//    return 0;
//}

////BC3 �����˴�
//#include <stdio.h>
//
//int main() {
//    printf("The size of short is %d bytes.\n", sizeof(short));
//    printf("The size of int is %d bytes.\n", sizeof(int));
//    printf("The size of long is %d bytes.\n", sizeof(long));
//    printf("The size of long long is %d bytes.\n", sizeof(long long));
//
//    return 0;
//}

////BC6 С�ɻ�
//#include <stdio.h>
//
//int main() {
//    printf("     **     \n");
//    printf("     **     \n");
//    printf("************\n");
//    printf("************\n");
//    printf("    *  *    \n");
//    printf("    *  *    \n");
//
//    return 0;
//}

////BC7 ���̶�����
//#include <stdio.h>
//
//int main() {
//    printf("%#o %#X", 1234, 1234);
//    return 0;
//}

////BC8 ʮ������תʮ����
//#include <stdio.h>
//
//int main() {
//    int  n = 0XABCDEF;
//    printf("%15d", n);
//    return 0;
//}

////BC9 printf�ķ���ֵ
//#include <stdio.h>
//
//int main() {
//    int a = printf("Hello world!");
//    printf("\n");
//    printf("%d\n", a);
//    return 0;
//}

////BC10 �ɼ��������
//#include <stdio.h>
//
//int main() {
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d %d %d", &a, &b, &c);
//    printf("score1=%d,score2=%d,score3=%d", a, b, c);
//    return 0;
//}

////BC11 ѧ��������Ϣ�������
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    float b = 0.0;
//    float c = 0.0;
//    float d = 0.0;
//    scanf("%d;%f,%f,%f", &a, &b, &c, &d);
//    printf("The each subject score of No. %d is %.2lf, %.2lf, %.2lf.\n", a, b, c, d);
//    return 0;
//}

////BC13 ASCII��
//#include<stdio.h>
//
//int main() {
//    int i = 0;
//    char arr[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33 };
//    int len = sizeof(arr) / sizeof(arr[0]);
//    for (i = 0; i < len; i++)
//        printf("%c", arr[i]);
//    return 0;
//}


////BC15 ���ո�ʽ���벢�������
//#include <stdio.h>
//
//int main() {
//    int a = 0;
//    int b = 0;
//    scanf("a=%d,b=%d", &a, &b);
//    int c = a;
//    a = b;
//    b = c;
//    printf("a=%d,b=%d", a, b);
//    return 0;
//}

////BC16 �ַ�תASCII��
//#include <stdio.h>
//
//int main() {
//    char a;
//    scanf("%c", &a);
//    printf("%d", a);
//    return 0;
//}

////BC17 ������ʽ��ֵ
//#include <stdio.h>
//
//int main() {
//    int a = 40;
//    int c = 212;
//    printf("%d", (-8 + 22) * a - 10 + c / 2);
//    return 0;
//}

////BC18 ����������
//#include <stdio.h>
//
//int main() {
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    printf("%d %d", a / b, a % b);
//    return 0;
//}

////BC19 �������һ����λ��
//#include <stdio.h>
//
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    while (a)
//    {
//        printf("%d", a % 10);
//        a = a / 10;
//    }
//    return 0;
//}

////BC20 kiki����
//#include <stdio.h>
//
//int main() {
//    int a, b;
//    scanf("%d %d", &a, &b);
//    if (a >= 100 || b >= 100) {
//        a = a % 100;
//        b = b % 100;
//    }
//    int c = a + b;
//    if (c >= 100) {
//        c = c % 100;
//    }
//    printf("%d", c);
//    return 0;
//}

////BC21 �������ĸ�λ����
//#include <stdio.h>
//
//int main() {
//    float a;
//    scanf("%f", &a);
//    printf("%d", (int)a % 10);
//
//    return 0;
//}

////BC22 ���ܻ������
//#include <stdio.h>
//
//int main() {
//    int a;
//    scanf("%d", &a);
//    long b = a * 31560000;
//    printf("%ld", b);
//    return 0;
//}

////BC23 ʱ��ת��
//#include <stdio.h>
//
//int main() {
//    int a;
//    scanf("%d", &a);
//    int hour = a / 3600;
//    int minute = a % 3600 / 60;
//    int seconds = a % 3600 % 60;
//    printf("%d %d %d", hour, minute, seconds);
//    return 0;
//}

////BC24 �ܳɼ���ƽ���ּ���
//#include <stdio.h>
//
//int main() {
//    float a, b, c;
//    scanf("%f %f %f", &a, &b, &c);
//    float d = a + b + c;
//    float e = d / 3;
//    printf("%.2f %.2f", d, e);
//    return 0;
//}

////BC25 ��������ָ��
//#include <stdio.h>
//
//int main() {
//    int a, b;
//    scanf("%d %d", &a, &b);
//    float c = (float)b / 100;
//    float bmi = a / (c * c);
//    printf("%.2f", bmi);
//    return 0;
//}

////BC26 ���������ε��ܳ������
//#include <math.h>
//#include <stdio.h>
//
//int main() {
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//    float d = a + b + c;
//    float e = 0.5 * d;
//    float area = sqrt(e * (e - a) * (e - b) * (e - c));
//    printf("circumference=%.2f area=%.2f", d, area);
//    return 0;
//}

////BC27 ������������
//#include <stdio.h>
//
//int main() {
//    float r;
//    scanf("%f", &r);
//    double v = 4 * r * r * r * 3.1415926 / 3;
//    printf("%.3f", v);
//    return 0;
//}

