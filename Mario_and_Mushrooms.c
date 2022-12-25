#include<stdio.h>
int main()
{
    int n,a=2,b,c;
    scanf("%d",&n);
    b=n%3;
    if(b==0)
    {
        printf("NORMAL");
    }
    else if(b==2)
    {
        printf("SMALL");
    }
    else
    {
        printf("HUGE");
    }
}