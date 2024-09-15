#include<iostream>
using namespace std;
void printsnake(int n){
int i,j;
for(i=0; i<n; i++)
{
 for(j=0; j<5; j++)
  {
  	if(i==j || (i-j)%2==0)
  	cout<<" * ";
  	else
  	cout<<" ";
  }
  cout<<endl;
}
}

int main(){
	int n = 10;
	printsnake(n);
	return 0;
}
