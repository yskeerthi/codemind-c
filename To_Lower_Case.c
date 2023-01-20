#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	scanf("%[^
]s",&a);
	int i;
	for(i=0;a[i]!=NULL;i++)
	{
		if(a[i]>='A' && a[i]<='Z')
		{
			a[i]=a[i]+32;
		}
	}
	printf("%s",a);
}