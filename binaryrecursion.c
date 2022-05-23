#include<stdio.h>
int binary_search(int *arr,int i,int j,int se)
{
	int m;
	if(i>j)
	{
		return 0;
	}
	m=(i+j)/2;
	if(arr[i]==se)
	{
		return 1;
	}
	if(arr[i]>se)
	{
		j=m-1;
	}
	else
	{
		i=m+1;
	}
	return binary_search(arr,i,j,se);
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
	if(binary_search(arr,0,n-1,se))          //i=0,j=n-1//
	{
		printf("found");
	}
	else
	{
		printf("not found");
	}
}
