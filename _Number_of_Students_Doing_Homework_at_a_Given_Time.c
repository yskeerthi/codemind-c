#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int m;
    scanf("%d",&m);
    int b[m];
    for(int i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    int k,count=0;
    scanf("%d",&k);
    for(int i=0;i<n;i++)
    {
        if(a[i]<=k && b[i]>=k)
        {
            count++;
        }
    }
    printf("%d",count);
}