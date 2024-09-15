#include<stdio.h>
int validparan(char str[])
{
	int i;
	for(i=0;i<str[i];i++)
	{
		if(str[i]+str[i+1]==2*str[i]+1||str[i]+str[i+1]==2*str[i]+2)
		{
			return 1;
			break;
		}
		
	}
	return 0;
}
int main()
{
  char s[20];
  printf("enter string:");
  gets(s);
  if(validparan(s))
  printf("valid paranthesis:");
  else
  printf("not valid:");
  return 0;
  	
}
