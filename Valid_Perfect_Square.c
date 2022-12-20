#include<stdio.h>
#include<math.h>
int main()
{
    int n,arr[100],i,k,w;
    float s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        s=sqrt(arr[i]);
        w=s;
        if(w==s)
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
    return 0;
}