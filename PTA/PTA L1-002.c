#include <stdio.h>
int main()
{
    int n = 0;//字符个数
    char c;//字符
    int i = 2;
    int m = 1;
    int h = 1;
    scanf("%d ", &n);
    scanf("%c", &c);

    while (n > m)
    {
        i = i + 1;
        m = m + 2 * (2 * i - 1);
        h += 2;
    }
    int count = 1;
    int sum = 0;
    for (int i = 3; i <= h; i+=2)
    {
        sum += i;
    }
    count = 1 + 2 * sum;
    int residue = n - count;//剩余数量

    if (residue < 0)
    {
        h -= 2;
        int count1 = 1;
        int sum1 = 0;
        for (int i = 3; i <= h; i += 2)
        {
            sum1 += i;
        }
        count1 = 1 + 2 * sum1;
        residue = n - count1;//剩余数量
    }
    //上半部分
    for (int i = 1; i <= h / 2 + 1; i++)//1 2 3 
    {
        for (int j = 1; j < i; j++)// 0 1 2
            printf(" ");
        for (int j = 1; j <= h-2*i+2; j++)//
            printf("%c", c);
        printf("\n");
    }

    //下半部分
    for (int i = h / 2 +2; i <= h; i++)//4 5
    {
        for (int j = h - i; j > 0; j--)//1 0
            printf(" ");
        for (int j = 1; j <= 2 * i - h; j++)//3 5
            printf("%c", c);
        printf("\n");
    }

    printf("%d",residue);
    return 0;
}