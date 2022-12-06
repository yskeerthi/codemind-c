#include<stdio.h>
int main()
{
    int c,i,a,b,x,count=0;
    scanf("%d%d%d",&a,&b,&c);
    for(b=b;b<=c;b++)
    {
        x=a*b;
        count++;
        printf("%d x %d = %d
",a,b,x);
    }
}