#include<stdio.h>
void printdup(char str[])
{
	int arr[26]={0};
	int i;
	for(i=0;i<str[i];i++)
	{
		arr[str[i]-'a']++;
	}
	for(i=0;i<strlen(str);i++)
	{
		printf(" %c=%d",i,arr[i]);
	}
}
int main()
{
	char s[20];
	printf("enter string:");
	gets(s);
	printdup(s);
	return 0;
}
