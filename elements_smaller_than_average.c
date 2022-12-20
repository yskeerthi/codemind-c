#include<stdio.h>
int main()
{
    int n,s=0,a[100],i,c=0;
    float avrg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
         scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    avrg=s/n;
    for(i=0;i<n;i++)
    {
        if(a[i]<=avrg)
      {
        c++;
      }
    }
    printf("%d",c);
    return 0;
    
}