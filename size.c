#include<stdio.h>
#include<string.h>
 int checkpalin(char str[])
 {
 	int i;
 	 int len=strlen(str);
    for(i=0;i<len/2;i++)
 	 {
 	   if(str[i]!=str[len-i-1])
 	    {
		
		return 0;
		break;
	    }
	 }
 	return 1;
 }
 void main()
 {
 	char str[10];
 	printf("enter string:");
 	gets(str);
 	if(checkpalin)
 	printf("palindrone:");
 	else
 	printf("not palindrone:");
 }
