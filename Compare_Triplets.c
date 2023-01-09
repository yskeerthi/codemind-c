#include<stdio.h>
int main()
{
    int m,n,a[10],b[10],c=0,z=0,i,j;
    for(i=1;i<=3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=1;j<=3;j++)
    {
        scanf("%d",&b[j]);
    }
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            
            if(i==j)
            {
                if(a[i]>b[j])
                {
                    c++;
                }
                else if(a[i]<b[j])
                {
                    z++;
                }
            }
        }
    }
    printf("%d %d",c,z);
    return 0;
}