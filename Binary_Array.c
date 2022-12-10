#include<stdio.h>
int main()
{
	int n,i,c;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==1 || a[i]==0)
		{
		      c=1;
		}
		else
		{
		    c=0;
		    break;
		}
	}
	     if(c==1)
	     {
	         	printf("True");
	     }
	
		else
		{
		    printf("False");
		}
		
	
}