#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr,i,n;
	printf("enter the number of element:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}
	ptr=(int*)malloc(n*sizeof(int));
	printf("your element is ::");
	for(i=0;i<n;i++)
	{
		printf(" %d",*(ptr+i));
	}
	return 0;
}

	

