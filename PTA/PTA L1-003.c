#include<stdio.h>
#include<string.h>
int main()
{
	char arr[1001];
	int brr[10] = { 0 };
	scanf("%s", arr);

	int len = strlen(arr);
	for (int i = 0; i < len; i++)
	{
		switch (arr[i])
		{
		case '0':brr[0]++; break;
		case '1':brr[1]++; break;
		case '2':brr[2]++; break;
		case '3':brr[3]++; break;
		case '4':brr[4]++; break;
		case '5':brr[5]++; break;
		case '6':brr[6]++; break;
		case '7':brr[7]++; break;
		case '8':brr[8]++; break;
		case '9':brr[9]++; break;
		default:break;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		if (brr[i] != 0)
		{
			printf("%d:%d\n", i, brr[i]);
		}
		
	}
	return 0;
}