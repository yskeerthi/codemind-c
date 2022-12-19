#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,z,l;
    scanf("%d%d%d",&a,&b,&c);
    z=pow(a,b);
    l=z%c;
    printf("%d",l);
}