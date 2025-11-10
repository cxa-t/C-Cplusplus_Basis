#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<string.h>
#include<math.h>
#include <limits.h>
#include <errno.h>
#include<stdlib.h>

//十进制转二进制
int DecToBin(int bin[], int num)
{
    // i表示二进制有多少位
    int i = 0;
    if (num == 0)
        return i;
    //模2除2，结果存放在二进制数组中并带回
    while (num)
    {
        bin[i++] = num % 2;
        num /= 2;
    }
    return i;
}

void test1()
{
    int bin[32] = { 0 };
    int number = 1004;
    printf("Decimal %d to Binary: ", number);
    int count = DecToBin(bin, number);
    //逆序打印就是答案
    for (int i = count - 1; i >= 0; i--)
        printf("%d", bin[i]);
}

//十进制转八进制
int DecToOct(int oct[], int num)
{
    //统计八进制有多少位
    int i = 0;
    if (num == 0)
        return i;
    //模8除8，将结果存储在结果数组中
    while (num)
    {
        oct[i++] = num % 8;
        num /= 8;
    }
    return i;
}

void test2()
{
    int oct[32] = { 0 };
    int number = 1004;
    printf("Decimal %d to Octal: 0", number);
    int count = DecToOct(oct, number);
    //逆序打印就是答案
    for (int i = count - 1; i >= 0; i--)
        printf("%d", oct[i]);
}

//将余数映射为十六进制中的0-9，A-F字符
char Reflect(int num)
{
    if (num > 9)
        return 'A' + (num - 10);
    else
        return num + '0';
}
//十进制转十六进制
int DecToHex(char hex[], int num)
{
    int i = 0;
    if (num == 0)
        return i;
    while (num)
    {
        hex[i++] = Reflect(num % 16);
        num /= 16;
    }
    return i;
}

void test3()
{
    char hex[32] = "0";
    int num = 1004;
    printf("Decimal %d Hexadecimal is :0x",num);
    int count = DecToHex(hex, num);
    for (int i = count - 1; i >= 0; i--)
        printf("%c", hex[i]);
}

//二进制转十进制
int BinToDec(char* bin)
{
    //求二进制位数
    int len = strlen(bin);
    //定义结果变量
    int decimal = 0;
    //从后往前进行位权 相乘相加 求结果
    int k = 0;//定义位权变量
    for (int i = len - 1; i >= 0; i--)
    {
        //二进制为1时进行计算
        if (bin[i] == '1')
            decimal += pow(2, k);
        //每次计算一位时，位权自增，无论该位是0还是1
        k++;
    }
    return decimal;
}

void test4()
{
    char bin[] = "1111101100";
    printf("Binary %s to Decimal is : %d", bin, BinToDec(bin));
}

//二进制转八进制（分组法）
char* BinToOct(char* bin) 
{
    //定义八进制序列
    char oct[32] = "0";
    int index = 0;
    //二进制序列长度
    int len = strlen(bin);
    //从右端开始 3 位一组
    for (int i = len-1; i >= 0; i -= 3) 
    {
        //定义三个一组，控制内层相加次数
        int count = 0;

        //分组位权求和结果
        int sum = 0;
        for (int j = i; count < 3 && j >= 0; j--)
        {
            sum += pow(2, count) * (bin[j] - '0');
            count++;
        }
        oct[index++] = (char)('0' + sum);
    }
    return oct;
}

void test5()
{
    char bin[] = "1111101100";
    printf("Binary %s to Octal is : 0", bin);
    char* oct = BinToOct(bin);
    int len = strlen(oct);
    for (int i = len - 1; i >= 0; i--)
    {
        printf("%c", oct[i]);
    }
}

//二进制转十六进制（分组法）
char* BinToHex(char* bin)
{
    //定义十六进制序列
    char hex[32] = { 0 };
    int index = 0;
    //二进制序列长度
    int len = strlen(bin);
    //从右端开始 4 位一组
    for (int i = len - 1; i >= 0; i -= 4)
    {
        //定义三个一组，控制内层相加次数
        int count = 0;

        //分组位权求和结果
        int sum = 0;
        for (int j = i; count < 4 && j >= 0; j--)
        {
            sum += pow(2, count) * (bin[j] - '0');
            count++;
        }
        hex[index++] = Reflect(sum);
    }
    return hex;
}

void test6()
{
    char bin[] = "1111101100";
    printf("Binary %s to Hexadecimal is : 0x", bin);
    char* oct = BinToHex(bin);
    int len = strlen(oct);
    for (int i = len - 1; i >= 0; i--)
    {
        printf("%c", oct[i]);
    }
}

//八进制转十进制
int OctToDec(char* oct)
{
    int num = 0;
    //八进制字符串长度
    int len = strlen(oct);
    int k = 0;
    for (int i = len - 1; i >= 0; i--)
    {
        num += pow(8, k) * (oct[i] - '0');
        k++;
    }
    return num;
}

void test7()
{
    char oct[] = "1754";
    printf("Octal %s to Decimal is : ", oct);
    printf("%d", OctToDec(oct));
}

//八进制转十六进制（分组法）
char* OctToHex(char* oct,char* hex,int* count)
{
    int num = OctToDec(oct);
    *count = DecToHex(hex,num);
    return hex;
}

void test8()
{
    char oct[] = "1754";
    char hex[32] = { 0 };
    int count = 0;
    printf("Octal %s to Hexadecimal is : ", oct);
    char* Hex = OctToHex(oct,hex,&count);
    for (int i = count - 1; i >= 0; i--)
        printf("%c", Hex[i]);
}

//八进制转二进制
char* OctToBin(char* oct,int* bin,int* count)
{
    int num = OctToDec(oct);
    *count = DecToBin(bin, num);
    return bin;
}

void test9()
{
    char oct[] = "1754";
    int bin[100] = { 0 };
    int count = 0;
    printf("Octal %s to Binary is : ", oct);
    int* Bin = OctToBin(oct, bin, &count);
    //逆序打印就是答案
    for (int i = count - 1; i >= 0; i--)
        printf("%d", Bin[i]);
}

//十六进制转十进制
int HexToDec(const char* hex, int* ok)
{
    char* end = NULL;
    errno = 0;

    long val = strtol(hex, &end, 16);   /* 16 表示按十六进制解析 */
    if (errno == ERANGE                /* 溢出 */
        || end == hex                  /* 根本没数字 */
        || *end != '\0'                /* 后面还有垃圾字符 */
        || val < INT_MIN || val > INT_MAX) {
        *ok = 0;
        return 0;
    }
    *ok = 1;
    return (int)val;
}

void test10()
{
    char hex[32] = "0x3EC";
    int ok;
    int dec = HexToDec(hex, &ok);
    if (ok)
        printf("Hexadecimal %s to Decimal is : %d\n", hex,dec);
    else
        printf("Invalid hex input!\n");
}

int main() 
{
    test1(); 
    puts(" ");
    test2();
    puts(" ");
    test3();
    puts(" ");
    test4();
    puts(" ");
    test5();
    puts(" ");
    test6();
    puts(" ");
    test7();
    puts(" ");
    test8();
    puts(" ");
    test9();
    puts(" ");
    test10();
    puts(" ");
    return 0;
}
