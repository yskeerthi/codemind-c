#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    c=n/4;
    if(n%4==0)
    {
     printf("%d",c);
    }
    else
    {
       printf("%d",c+1);
    }
    
}