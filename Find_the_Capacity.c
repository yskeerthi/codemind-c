#include<stdio.h>
int main()
{
    int n=3,i,ca,c=1,s,t,b;
   int ar[n]={t,s,b};
    for(i=0;i<n;i++)
    {
       scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        c=c*ar[i];
       ca=(2*c*512)/1024;
    }
    printf("%dKB",ca);
}