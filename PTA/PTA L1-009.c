#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>

//两数的最大公约数
long Gcd(long a,long b)
{
    //核心逻辑：当b不为0时，循环替换a与b，直至b为0，则m就是最大公约数
    while (b != 0)
    {
        int temp = b;//临时存储b的值，防止后续被覆盖
        b = a % b;//a对b取余进行更新
        a = temp;//用原来的b更新a
    }
    return a;//当循环停止时，即计算下去无余数时此时的被除数便为最大公约数
}

//最小公倍数
long Lcm(long a, long b)
{
    return ((a / Gcd(a, b)) * b);//防止溢出
}

//对两个分数进行求和，并带出求和后的值供后续使用
void add_sum(long up, long down, long* up_sum, long* down_sum)
{
	if (up < 0 && down < 0)
	{
		up = abs(up);
		down = abs(down);
	}
	else if (up > 0 && down < 0)
	{
		up = (-1) * up;
		down = abs(down);
	}
	long new_down = Lcm(down, *down_sum);//两个分数通分后 新分母
	long new_up = up * (new_down / down) + *up_sum * (new_down / *down_sum);
	long gcd = Gcd(new_down, abs(new_up));
	*up_sum = new_up / gcd;
	*down_sum = new_down / gcd;
}

int main()
{
	//分数个数
	int num = 0;
	scanf("%d", &num);

	//求和的初始分子分母
	long up_sum = 0;
	long down_sum = 1;

	//初始化输入的分子分母
	long up = 0;
	long down = 0;
	while (num)
	{
		//接收每一个输入的分数
		scanf("%ld%*c%ld", &up, &down);
        if(up!=0&&down!=0)
			add_sum(up, down, &up_sum, &down_sum);
		num--;
	}

	if (abs(up_sum) >= down_sum && up_sum % down_sum != 0)
		printf("%ld %ld/%ld", abs(up_sum / down_sum), up_sum % down_sum, down_sum);
	else if(up_sum % down_sum == 0)
		printf("%ld", up_sum / down_sum);
	else if(up_sum != 0)
		printf("%ld/%ld", up_sum, down_sum);
	else
		printf("0");
	return 0;
}