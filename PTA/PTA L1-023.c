#include<stdio.h>
#include<string.h>
int main()
{
	char  a[10001];
	scanf("%s", &a);
	int len = strlen(a);
	char G[10001] = { 0 };
	char P[10001] = { 0 };
	char L[10001] = { 0 };
	char T[10001] = { 0 };
	int count_g = 0;
	int count_p = 0;
	int count_l = 0;
	int count_t = 0;
	for (int i = 0; i < len; i++)
	{
		if (a[i] == 'g' || a[i] == 'G')
		{
			G[count_g] = 'G';
			count_g++;
		}
		else if (a[i] == 'p' || a[i] == 'P')
		{
			P[count_p] = 'P';
			count_p++;
		}
		else if (a[i] == 'l' || a[i] == 'L')
		{
			L[count_l] = 'L';
			count_l++;
		}
		else if (a[i] == 't' || a[i] == 'T')
		{
			T[count_t] = 'T';
			count_t++;
		}
	}

	int sum = count_g + count_l + count_p + count_t;
	for (int i = 0; i < sum; i++)
	{
		if (G[i] != '\0')
		{
			printf("%c",G[i]);
		}
		if (P[i] != '\0')
		{
			printf("%c", P[i]);
		}
		if (L[i] != '\0')
		{
			printf("%c", L[i]);
		}
		if (T[i] != '\0')
		{
			printf("%c", T[i]);
		}
	}
	return 0;
}