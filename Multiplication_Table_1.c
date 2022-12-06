#include<stdio.h>
int main()
{
    int i,a,x;
    scanf("%d",&a);
    for(i=1;i<=12;i++)
    {
        x=a*i;
        printf("%d x %d = %d
",a,i,x);
    }
}