#include<stdio.h>
int main()
{
    char str[100];
    int n,i,max;
    scanf("%[^
]s",str);
    max=str[i];
    for(i=0;str[i]!=0;i++)
    {
       if(max<str[i])
       {
           max=str[i];
       }
    }
    printf("%c",max);
    
}