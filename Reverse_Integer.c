#include<stdio.h>
int main()
{
    int n,r,rev=0;
    scanf("%d",&n);
    int temp=n;
    while(temp)
    {
       r=temp%10;
       rev=(rev*10)+r;
       temp=temp/10;
    }
    printf("%d",rev);
}