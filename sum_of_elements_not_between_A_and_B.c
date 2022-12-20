#include<stdio.h>
int main()
{
    int n,arr[1000],i,a,b,sum=0,x=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
    }
    
    for(i=0;i<n;i++)
    {
        if(arr[i]>=a && arr[i]<=b)
        {
            x++;
         }
         else
         {
             sum=sum+arr[i];
         }
    }
    printf("%d",sum);
    return 0;
}