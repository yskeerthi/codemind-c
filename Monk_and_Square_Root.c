#include<stdio.h>
int main()
{
    long int n,m,a,c=0,i,j,k;
    scanf("%ld",&a);
    for(j=0;j<a;j++)
    {
        scanf("%ld%ld",&n,&m);
        c=0;
        for(i=0;i<n||i<m;i++)
        {
            k=i*i;
            if(k%m==n)
            {
                printf("%ld
",i);
                c+=1;
                break;
            }
        }
    if(c==0)
    {
        printf("-1
");
    }
    }
}