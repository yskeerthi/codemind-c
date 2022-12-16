#include<stdio.h>
int main()
{
    int n,t1=0,t2=1,r,i;
    scanf("%d",&n);
    r=t1+t2;
    printf("%d %d ",t1,t2);
    for(i=3;i<=n;i++)
    {
        printf("%d ",r);
        t1=t2;
        t2=r;
        r=t1+t2;
        
    }
    return 0;
}