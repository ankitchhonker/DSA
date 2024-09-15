#include<iostream>
using namespace std;
int roman(char c)
{
    if(c=='I')
    return 1;
   else if(c=='V')
    return 5;
  else  if(c=='X')
    return 10;
  else  if(c=='L')
    return 50;

return 0;
    

}

int romaToInteer(string s){
    int i = 1;
    int ans = 0;
    while(s[i-1]){
        if(roman(s[i])>roman(s[i-1])){
           ans -= roman(s[i-1]);
        } else{
            ans += roman(s[i-1]);

        }
        i++;
    }
return ans;
}

int main(){
    string s ="XXXX";
    int ans = romaToInteer(s);
    cout<<s<<"="<<ans<<endl;
    return 0;
}
 