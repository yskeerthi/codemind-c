#include<stdio.h>
int main()
{
    int n,i,r,c=0;
    scanf("%d",&n);
    if(n<2)
    {
        printf("Not Mega Prime");
    }
    else
    {
        int f=0,c=0;
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                f=1;
                break;
            }
        }
        if(f==1)
        {
            printf("Not Mega Prime");
        }
        else
        {
            int nc=0;
            while(n)
            {
                int r=n%10;
                nc++;
                n=n/10;
                if(r==2||r==3||r==5||r==7)
                {
                    c++;
                }
            }
            if(nc==c)
            {
                printf("Mega Prime");
            }
            else
            {
                printf("Not Mega Prime");
            }
        }
    }
}


