#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>

//���������Լ��
long Gcd(long a,long b)
{
    //�����߼�����b��Ϊ0ʱ��ѭ���滻a��b��ֱ��bΪ0����m�������Լ��
    while (b != 0)
    {
        int temp = b;//��ʱ�洢b��ֵ����ֹ����������
        b = a % b;//a��bȡ����и���
        a = temp;//��ԭ����b����a
    }
    return a;//��ѭ��ֹͣʱ����������ȥ������ʱ��ʱ�ı�������Ϊ���Լ��
}

//��С������
long Lcm(long a, long b)
{
    return ((a / Gcd(a, b)) * b);//��ֹ���
}

//����������������ͣ���������ͺ��ֵ������ʹ��
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
	long new_down = Lcm(down, *down_sum);//��������ͨ�ֺ� �·�ĸ
	long new_up = up * (new_down / down) + *up_sum * (new_down / *down_sum);
	long gcd = Gcd(new_down, abs(new_up));
	*up_sum = new_up / gcd;
	*down_sum = new_down / gcd;
}

int main()
{
	//��������
	int num = 0;
	scanf("%d", &num);

	//��͵ĳ�ʼ���ӷ�ĸ
	long up_sum = 0;
	long down_sum = 1;

	//��ʼ������ķ��ӷ�ĸ
	long up = 0;
	long down = 0;
	while (num)
	{
		//����ÿһ������ķ���
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