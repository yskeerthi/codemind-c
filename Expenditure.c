#include<stdio.h>
int exp(int x,int y)
{
    if((x/30)/y)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int x,y,a;
    scanf("%d%d",&x,&y);
    a=exp(x,y);
    if(a==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}