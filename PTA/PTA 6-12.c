int even( int n )
{
    int a = n;
    if(a<0)
        a *= -1;
    if(a%2==0)
        return 1;
    else
        return 0;
}