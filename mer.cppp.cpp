#include<stdio.h>
#include<string.h>

 void mergestring(char s[], char s1[]){
	 int l1=strlen(s);
	 int l2=strlen(s1);
	 int i,j=0;
	 for(i=l1; i<=l1+l2;i++){
	 	s[i]=s1[j];
	 	j++;
	 }
	 s[i]='\0';
	 
}

int main(){
	char s1[]="ankit";
	char s2[]="Thakur";
	mergestring(s1,s2);
	printf("%s",s1);
	return 0;
}
