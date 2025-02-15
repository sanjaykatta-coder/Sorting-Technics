#include<stdio.h>
void selection(int a[],int n)
{
    int i,j,min;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
            
        }
        int temp;
        if(min!=i)
            {
                temp=a[i];
                a[i]=a[min];
                a[min]=temp;
            }
    }
}
int print(int a[],int n)
{
	int i;
    for( i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
	int n,i;
	scanf("%d\n",&n);
	int a[n];
	int t=5;
	for( i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	selection(a,n);
	print(a,n);
}
