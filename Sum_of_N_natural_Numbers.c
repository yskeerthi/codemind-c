#include<stdio.h>
int main()
{
    int i,n,res;
    scanf("%d",&n);
    res=0;
    for(i=1;i<=n;i++)
    {
        res=res+i;
    }
    printf("%d
",res);
}
