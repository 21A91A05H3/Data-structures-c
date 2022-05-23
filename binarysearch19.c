#include<stdio.h>
int binary_search(int *arr,int n,int se)
{
	int i=0,j=n-1,m;
	while(i<=j)
	{
		m=(i+j)/2;
		if(arr[i]==se)
		{
			return 1;
		}
		else if(arr[i]>se)
		{
			j=m-1;
		}
		else
		{
			i=m+1;
		}
	}
}
void main()
{
	int n,i,arr[100],se;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&se);
	if(binary_search(arr,n,se))
	{
		printf("Found");
	}
	else
	{
		printf("Not Found");
	}
}
