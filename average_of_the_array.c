#include<stdio.h>
int main()
{
	int n,i;
	float sum=0,avrg;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		avrg=sum/n;
	}
	printf("%.2f",avrg);
}