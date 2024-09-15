#include<iostream>
#include<string.h>
using namespace std;
int checkpalindrone(char str[], int n){
    int i=0;
    while(i<n){
        if(str[i]!=str[n-i-1]){
            return 0;
            break;
          i++;
            
        }
        
    }
    
    
}
int main(){
    char arr[]="amma";
    int n=strlen(arr);
    if(checkpalindrone(arr,n))
    cout<<"palindrone invalid";
    else
    cout<<"palindrone valid";

    return 0; 

}