#include<stdio.h>
int main()
{
    int n,d;
    scanf("%d",&n);  
    while(n)
    {
        d=n%10;
        n=n/10;
        if(d%2==0 && n%2==0)
        {
            printf("Even");
        }
        else if(d%2!=0 && n%2!=0)
        {
            printf("Odd");
        }
        else
        {
            printf("Mixed");
        }
        return 0;
        
    }
}