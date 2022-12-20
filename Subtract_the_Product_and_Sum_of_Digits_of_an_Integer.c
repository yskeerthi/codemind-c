#include<stdio.h>
int main()
{
    int n,s=1,d,sum=0,res=0;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        n=n/10;
        s=s*d;
        sum=sum+d;
    }
    res=s-sum;
    printf("%d",res);
    return 0;
}    
    