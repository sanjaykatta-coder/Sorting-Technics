#include<stdio.h>
int insert(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		int temp=a[i];
		j=i-1;
		while(j>=0 && temp > a[j])
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for( i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	insert(a,n);
	for( i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
