#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i,m,n;
    scanf("%d%d",&a,&b);
    for(i=a+1;i<b;i++)
    {
        m=pow(i,2);
        n=pow(i,3);
         printf("%d %d %d
",i,m,n);
    }
   
     
}