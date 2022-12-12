#include<stdio.h>
int dp(int n,int d)
{
    d=(n*(n-3))/2;
    return d;
}
int main()
{
    int n,d,x;
    scanf("%d",&n);
    x=dp(n,d);
    printf("%d",x);
}