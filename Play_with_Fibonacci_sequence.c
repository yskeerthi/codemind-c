#include<stdio.h>
int main()
{
    int n,a1=0,a2=1,t,i;
    scanf("%d",&n);
    t=a1+a2;
     printf("%d %d ",a1,a2);
    for(i=3;i<=n;i++)
    {
     printf("%d ",t);  
       a1=a2;
       a2=t;
       t=a1+a2;
       
    }
    
}