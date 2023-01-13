#include<stdio.h>
int main()
{
    int i,l,u;
    scanf("%d%d",&l,&u);
    for(i=1;i<=u;i++)
    {
        if(i*l%u==0)
        {
            printf("%d",i*l);
            break;
        }
    }
}