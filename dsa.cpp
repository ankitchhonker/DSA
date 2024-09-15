#include<iostream>
using namespace std ;
//increase thinking availability using think more about that problem.. it's good approach to solve a problem regarding this situtaoin
void printmountain(int n)
{
	int i,j;
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=4; j++)
		{
			if(i == j|| i + j == 8 || i-j==6)
			cout<<" * ";
			
			else
			cout<<" ";
		}
		cout<<" "<<endl;
	}
}

int main(){
	int n=6;
	printmountain(n);
	return 0;
}
