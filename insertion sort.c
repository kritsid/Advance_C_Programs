#include<stdio.h>
int main()
{
	int i,j,n,a[100],t;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j>0;j--)
		{
			if(a[j]<a[j-1])
			{
				t=a[j-1];
				a[j-1]=a[j];
				a[j]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ", a[i]);
	}
}
