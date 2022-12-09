#include<stdio.h>
int main()
{
    int n, i, q, sum=0;
    scanf("%d",&n);

    q= n*n;

    for(i=q;i>0;i/=10)
    {
        sum += (i % 10);
    }

    if(sum==n)
        printf("Neon Number");
    else
        printf("Not Neon Number");

    return 0;
}