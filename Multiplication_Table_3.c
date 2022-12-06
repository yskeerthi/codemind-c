#include<stdio.h>
int main()
{
    int c,a,b,x;
    scanf("%d%d%d",&a,&b,&c);
    for(b=b;b<=c;b++)
    {
        x=a*b;
        printf("%d x %d = %d
",a,b,x);
    }
}