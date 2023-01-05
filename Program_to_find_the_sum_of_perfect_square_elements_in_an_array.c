#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,sum=0,s;
    scanf("%d",&n);
    int arr[n],j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        
        for(j=0;j<=arr[i];j++)
        {
            if(arr[i]==j*j)
            sum=sum+arr[i];
        }
    }
    printf("%d",sum);
    
}