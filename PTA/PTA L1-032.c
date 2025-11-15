#include<stdio.h>
#include<string.h>

int main()
{
	int a = 0;
	char f;
	scanf("%d %c", &a, &f);
	char c[100001];
	getchar();
	gets(c);
	int len = strlen(c);
	if (a >= len)
	{
		int chazhi = a - len;
		for (int i = 0; i < len + chazhi; i++)
		{
			if (i < chazhi)
			{
				printf("%c", f);
			}
			else
			{
				printf("%c", c[i - chazhi]);
			}
		}
	}
	else if (a < len)
	{
		int chazhi = len - a;
		for (int j = chazhi; j < len; j++)
		{
			printf("%c", c[j]);
		}
	}
	return 0;
}
