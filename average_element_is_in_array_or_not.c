#include<stdio.h>
int main()
{
	int n,i,flag=0;
	int sum=0,avrg;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
		avrg=sum/n;
		for(i=0;i<n;i++)
		{
		    if(avrg==a[i])
		    {
		        flag=1;
		    break;
		    }
		    
		}
	    if(flag==1)
		printf("True");
		else
		{
		    printf("False");
		}
		
	
}
