#include<stdio.h>
void uppermat(int mat[10][10],int row, int col)
{
	int i,j;
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(i<=j)
			printf(" %d", mat[i][j]);
			else
			printf(" 0");
			
		}
		printf("\n");
	}
}
int main()
{
	int mat[10][10];
	int row,col,i,j;
	printf("enter the size of row:");
	scanf("%d",&row);
	printf("enter the sizeof col:");
	scanf("%d",&col);
	printf("Enter the element of matrix:");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d", &mat[i][j]);
		}
	}
	uppermat(mat,row,col);
	return 0;
}
