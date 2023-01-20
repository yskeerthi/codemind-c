#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	int i,l=0,j,temp;
	scanf("%[^
]s",a);
	
	for(i=0;a[i]!=NULL;i++)
	{
		l++;
	}
	i=0;
	j=l-1;
	while(i<j)
	{
		temp=a[j];
		a[j]=a[i];
		a[i]=temp;
		i++;
		j--;
		
		
	}
	printf("%s",a);
}