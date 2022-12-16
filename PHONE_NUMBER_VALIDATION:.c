#include<stdio.h>
int main()
{
    int n,c=0,i;
    scanf("%d",&n);
    while(n>1)
    {
        n=n/10;
        c++;
        if(c==10 && n==0)
        {
            c--;
        }
    }
    if(c==9)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
    
}
