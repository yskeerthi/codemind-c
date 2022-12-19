#include<stdio.h>
int main()
{
    int n,t,s,d,c=0,j;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&t,&s);
         if(t<s)
            {
                for(j=t;j<=s;j++)
                {
                    while(j)
                    {
                    d=j%10;
                    break;
                    }
                    if(d==9 || d==2 || d==3)
                    {
                        c++;
                    }
                }
                printf("%d
",c);
                c=0;
            }
    }
}
   