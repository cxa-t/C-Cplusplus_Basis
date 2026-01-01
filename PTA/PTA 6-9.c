int Count_Digit ( const int N, const int D )
{
    int n = N;
    if(N<0)
    {
        n *= (-1);
    }
    else if(n==0)
    {
        return 1;
    }
    int a[10]={0};
    int i = 0;
    while(n)
    {
        i=n%10;
        a[i]++;
        n /= 10;
    }
    for(int i=0;i<10;i++)
    {
        if(i==D)
        {
            return a[D];
        }
    }

}