#include<stdio.h>
int main()
{
    int d,c,a1,a2,a3,b1,b2,b3,m,n,t1,t2;
    scanf("%d%d",&d,&c);
    scanf("%d%d%d",&a1,&a2,&a3);
    scanf("%d%d%d",&b1,&b2,&b3);
    m=a1+a2+a3;
    n=b1+b2+b3;
    t1=m+n+d+d;
    if(m>=150 && n>=150)
    {
        t2=m+n+c;
    }
    else if(m>=150 && n<150 || m<150 && n>=150)
    {
        t2=m+n+d+c;
    }
    else
    {
        t2==t1;
    }
    if(t2<t1)
        printf("YES");
    else
        printf("NO");
}