#include<stdio.h>
struct student{
	int rollno;
	char name[20];
	char college[40];
	float score;
};
int main()
{
	int i;
	struct student data[100];
	printf("enter student data:\n");
	for(i=0;i<3;i++)
	{
		printf(" enter the data of roll number=%d\n",i+1);
		 
		printf("enter name:");
	    fgets(data[i].name,20,stdin);
		printf("enter college name:");
		fgets(data[i].college,40,stdin);
		printf("enter total score:");
		scanf("%f",&data[i].score);
		printf("\n"); 
	}
	for(i=0;i<3;i++)
	{
		printf(" roll number:%d\n",i+1);
		 
		printf("student name:%s\n ",data[i].name);
	
		 
		printf(" college name:%s\n",data[i].college);
		 
		printf(" total score:%f\n",data[i].score);
		printf("\n");
		 
	}
	
	
	
return 0;	 
	
}
