#include<stdio.h>
#include<string.h>
int main()
{
	int i,temp=0;
	char str[20];	
	printf("enter string:");
	fgets(str,20,stdin);
	for(i=0;i<strlen(str)/2;i++)
	{
		if(str[i]!=str[strlen(str)-1-i])
		{
		printf("not palindrone:");
		break;
		}
				else
		printf("palindrone:"); 
	}
	
	 
	return 0;
	
	
	
	
}
