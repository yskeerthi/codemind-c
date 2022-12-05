#include<stdio.h>
int main()
{
    int n,p,i,q,d,sum=0,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(i*i);
        s=s+i;
        q=s*s;
        d=q-sum;
    }
    printf("%d",d);
}