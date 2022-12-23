#include<stdio.h>
int main()
{
    int n,x,c;
    scanf("%d",&n);
    if(n%5==0 && n%10==0)
    {
        x=n/10;
        printf("%d",x);
    }
    else if(n%5==0 && n%10!=0)
    {
        c=n/10;
        printf("%d",c+1);
    }
    else
    {
        printf("-1");
    }
}