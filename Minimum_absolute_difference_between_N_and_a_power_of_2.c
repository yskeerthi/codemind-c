#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,a1,a2,a,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(n<=pow(2,i))
        {
            a=i-1;
            b=i;
            break;
        }
    }
    a1=n-pow(2,a);
    a2=pow(2,b)-n;
    if(a1<a2)
    {
        printf("%d",a1);
    }
    else
    {
        printf("%d",a2);
        
    }
}