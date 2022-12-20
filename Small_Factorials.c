#include<stdio.h>
int main()
{
    int n,t,i,j,k=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&t);
        for(j=1;j<=t;j++)
        {
            k=k*j;
        }
        printf("%d
",k);
        k=1;
    }
}