#include<stdio.h>
int main()
{
    int l,b,w,area,c,cost;
    scanf("%d%d%d%d",&l,&b,&w,&cost);
    area=((l+2*w)*(b+2*w))-(l*b);
    c=area*cost;
    printf("%d",c);
}