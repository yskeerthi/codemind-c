#include<stdio.h>
int main()
{
    int n,k,m,b,r;
    scanf("%d%d%d",&n,&k,&m);
   b=k*m;
   r=n/b;
   if(n%b==0)
   {
       printf("%d",r);
   }
   else
   {
       printf("%d",r+1);
   }
}