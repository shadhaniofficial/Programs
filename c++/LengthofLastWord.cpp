//Find the Length of the last word in string

#include<bits/stdc++.h>
using namespace std;

int main(){
  
  string in = "Heyy this is shadhani  ";
  
  int j=0;
  while (in[in.size()-1-j] == ' ') j++;
  
  string ans = "";
  for(int i=in.size()-1-j; i>0; i--){
    if(in[i] == ' '){
      break;
    }
    ans += in[i];
  }
  
  reverse(ans.begin(),ans.end());
  cout << ans.size() << endl << ans;
  
  return 0;
}


