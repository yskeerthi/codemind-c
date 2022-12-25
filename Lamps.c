#include<stdio.h>
int main()
{
    float n,k,x,y,l,r;
    scanf("%f%f%f%f",&n,&k,&x,&y);
    l=n-k;
    if(l*x<l*y)
    {
        r=k*x+l*x;
    }
    else
    {
        r=k*x+l*y;
    }
    printf("%.0f",r);
   
}