#include<stdio.h>
int sort(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			if(a[j-1]>a[j])
			{
			  int temp=a[j-1];
			  a[j-1] =a[j];
			  a[j]=temp;
	     	}
		}
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,n);
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
