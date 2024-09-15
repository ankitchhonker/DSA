#include<stdio.h>
int binary(int a[], int left, int right, int key )
{
	if(right>=left)
	{
		int mid=left+(right-left)/2;
		if(a[mid]==key)
		return mid;
		if(a[mid]>key)
		return binary(a,right,mid-1,key);
		return binary(a,mid+1,left,key);
	}
	return -1;
}
int main()
{
	int i,*ptr;
	int n=
	int key;
	printf("enter array element:");
	ptr=(int *)malloc(n*sizeof(int));
	for( i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	
	
 
	 
	printf("enter element:");
	scanf("%d",&key);
	int result=binary(a,0,n-1,key);
	if(result==-1)
	printf("element not present in array:");
	else
	printf("element found at index :%d",result);
	return 0;
}
