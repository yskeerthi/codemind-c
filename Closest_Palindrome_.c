#include<stdio.h>
int fun(int n)
{
    int t,d,r=0;
    t=n;
    while(t)
    {
        d=t%10;
        r=r*10+d;
        t=t/10;
    }
    if(r==n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a,b,i,j,n,t;
    scanf("%d",&n);
    for(i=n+1;i<n+10000;i++)
    {
        if(fun(i)==1)
        {
            a=i;
            break;
        }
    }
    for(i=n-1;i>0;i--)
    {
        if(fun(i)==1)
        {
            b=i;
            break;
        }
    }
    if((n-b)==(a-n))
    {
        printf("%d %d",b,a);
    }
    else if((n-b)<(a-n))
    {
        printf("%d",b);
    }
    else
    {
        printf("%d",a);
    }
}