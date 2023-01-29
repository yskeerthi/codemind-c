#include<stdio.h>
int main()
{
    int m,i,j,c=0,x=0,z;
    char str[100];
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        c=0;
        for(j=0;str[j]!=0;j++)
        {
            if(str[i]==str[j])
            {
                c+=1;
            }
        }
        if(c==1)
        {
            z=i;
            x++;
        }
        if(x==1)
        {
            break;
        }
        else
        {
            continue;
        }
        break;
    }
    if(x==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d ",z);
    }
}