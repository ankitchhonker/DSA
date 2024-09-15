#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,*ptr;
	int n;
	printf("enter the sizeof array you WANT TO CREATE:");
	scanf("%d",&n);
	
	ptr=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("enter the value of index %d\n",i);
		scanf("%d",ptr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf(" the value of index %d is %d",i,ptr[i]);
		 
	}
	return 0;
}
