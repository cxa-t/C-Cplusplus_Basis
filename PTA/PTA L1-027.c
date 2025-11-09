#include <stdio.h>
#include <string.h>

int main()
{
    char a[12];
    scanf("%s", a);
    int len = strlen(a);
    int a1[10] = { 10,10,10,10,10,10,10,10,10,10 };
    for (int i = 0; i < len; i++)
    {
        int num = a[i] - '0'; // 将字符转换为对应的数字
        if (num >= 0 && num <= 9) {
            a1[num] = num; // 使用 num 作为索引更新 a1 数组
        }
    }
 
    int arr[11];
    int count = 0;

    for (int i = 9; i >= 0; i--)
    {
        if (a1[i] != 10) // 判断数组元素是否非零
        {
            arr[count] = a1[i];
            count++;
        }
    }

    int index[11] = { 10,10,10,10,10,10,10,10,10,10,10 };

    for (int i = 0; i < len; i++)
    {
        int num = a[i] - '0';
        for (int j = 0; j < count; j++) {
            if (num == arr[j]) {
                index[i] = j;
                break;
            }
        }
    }
    printf("int[] arr = new int[]{");
    for (int i = 0; i < count; i++)
    {
        printf("%d", arr[i]);
        if (i != count - 1)
        {
            printf(",");
        }
    }
    printf("};\n");
    printf("int[] index = new int[]{");
    for (int i = 0; i < 11; i++)
    {
        printf("%d", index[i]);
        if (i != 10)
        {
            printf(",");
        }
    }
    printf("};\n");
    return 0;
}
