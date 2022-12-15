#include<stdio.h>
int main()
{
    int n,i,r=0,k,j,l,h=0;
    scanf("%d",&n);
    j=n*n;
    while(n!=0)
    {
        k=n%10;
        r=r*10+k;
        n=n/10;
    }
    l=r*r;
    while(l!=0)
    {
        k=l%10;
        h=h*10+k;
        l=l/10;
    }
    if(j==h)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}