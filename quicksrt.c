#include<stdio.h>
int partition(int a[],int lb,int ub)
{
	int pivot=a[lb];
	int start=lb;
	int end=ub;
	while(start<end)
	{
		while(a[start]<=pivot)
		{
			start++;
		}
		while(a[end]>pivot)
		{
			end--;
		}
		if(start<end)
		{
			int temp=a[start];
			a[start]=a[end];
			a[end]=a[start];
		}
	}
	int temp=a[lb];
	a[lb]=a[ub];
	a[ub]=a[lb];
	return end;
}
int quicksrt(int a[],int lb,int ub)
{
	if(lb<ub)
	{
		int loc=partition(a,lb,ub);
	  	quicksrt(a,loc-1,lb); 	
		quicksrt(a,loc+1,ub);
		
	}
	return 0;
}
int main()
{
	int arr[5]={3,6,2,8,9};
	int lb=arr[0];
	int ub=arr[5];
	partition(arr,lb,ub);
	quicksrt(arr,lb,ub);
	return 0;
	
}
