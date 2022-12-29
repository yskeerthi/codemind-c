#include<stdio.h>
int main()
{
    int n,arr[100],i,j,max=0,c=0,a,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<a || arr[i]>b)
        {
            if(arr[i]==max)
            {
                printf("%d",arr[i]);
            }
        }
        else if(arr[i]>=a && arr[i]<=b)
        {
            if(arr[i]==max)
            {
                c++;
            }
        }
    }
    if(c>=1)
    {
        printf("-1");
    }
    return 0;
}