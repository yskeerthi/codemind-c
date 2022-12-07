#include<stdio.h>
int main()
{
    int ti,i;
    scanf("%d",&ti);
    for(i=1;i<=ti;i++)
    {
    int n,s=0,r,q;
    scanf("%d",&n);
    q=n;
   while(q!=0)
   {
    r=q%10;
    s=s*10+r;
    q=q/10;
  }
    if(s==n)
    {
        printf("True
");
    }
    else
    {
        printf("False
");
    }
   } 
}