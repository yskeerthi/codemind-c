
#include<stdio.h>
int main()
{
    char str[100],a[100],b[100];
    scanf("%[^
]s",str);
    int arr[100],k=0,d=0,i,c=0,m=0,h=0;
    for(i=0;str[i]!=0;i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            c+=1;
        }
        
    }
    c=c-1;
    for(i=0;str[i]!=0;i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            a[c]=str[i];
            c=c-1;
            arr[d]=i;
            d=d+1;
        }
        
    }
    for(i=0;str[i]!=0;i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            b[h]=a[m];
            m+=1;
            h+=1;
        }
        else
        {
            b[h]=str[i];
            h+=1;
        }
    }
    for(h=0;b[h]!=0;h++)
    {
        printf("%c",b[h]);
    }
}