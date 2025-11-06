#include <stdio.h>

int main()
{
    int n = 0; // 朋友圈个数
    scanf("%d", &n);
    int arr[100001] = { 0 };

    int id = 0; // id
    int m = 0; // 朋友圈人数

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m);
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &id);
            if (m != 1)
            {
                arr[id] = 1;
            }
        }
    }
    int id_k = 0;
    int t = 0;
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &id_k);
        if (arr[id_k] != 1)
        {
            if (t == 0)
            {
                printf("%05d", id_k);
                t++;
            }
            else
            {
                printf(" %05d", id_k);
                t++;
            }
            arr[id_k] = 1;
        }
    }
    if (t == 0) { // t=0表示都没朋友
        printf("No one is handsome");
    }
    return 0;
}