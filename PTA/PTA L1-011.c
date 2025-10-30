#include<stdio.h>
#include<string.h>
int main()
{
	char a[10001];
	char b[10001];
	gets(a);
	gets(b);
	int lena = strlen(a);
	int lenb = strlen(b);
	int k = 0;
	for (int i = 0; i < lena; i++)
	{
		int found = 0;
		for (int j = 0; j < lenb; j++)
		{
			if (a[i] == b[j])
			{
				found = 1;
				break;
			}
		}
		if (found == 0)
		{
			a[k] = a[i];
			k++;
		}
	}
    a[k] = '\0'; // 结果字符串末尾添加终止符

    printf("%s\n", a);
	return 0;
}