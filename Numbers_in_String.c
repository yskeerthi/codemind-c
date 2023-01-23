#include<stdio.h>
int main()
{
    char str[1000];
    int i,n,sum=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=0;i++)
    {
         if(str[i]>='0' && str[i]<='9')
      {
        sum=sum+(str[i]-'0');
      }
    }
    printf("%d",sum);
}