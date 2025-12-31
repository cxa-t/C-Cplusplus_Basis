int IsTheNumber ( const int N )
{
    int n1 = (int)sqrt(N);
    int n2 = N;
    int i = 0;
    int a[10]={0};
    while(n2)
    {
        i=n2%10;
        a[i]++;
        n2=n2/10;
    }
    if(n1 * n1 == N)
    {
        for(int i=0;i<10;i++)
        {
            if(a[i]>1)
            {
                return 1;
            }
        }
    }
    else
    {
        return 0;
    }
}