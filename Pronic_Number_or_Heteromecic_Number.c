#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n==(i)*(i+1))
        {
            printf("YES");
            break;
        }
    }
    if(n!=(i)*(i+1))
    {
        printf("NO");
    }
    
}