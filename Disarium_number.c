#include<stdio.h>
#include<math.h>
int main()
{
    int n,s=0,d,i,r,temp;
    scanf("%d",&n);
    temp=n;
    d=log10(n)+1;
    for(i=d;i>=1;i--)
    {
        r=n%10;
        s=s+pow(r,i);
        n=n/10;
    }
    if(s==temp)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}