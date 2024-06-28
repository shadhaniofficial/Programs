//Leetcode 443 String Compression

#include <iostream>
#include <string>

using namespace std;

int main(){
  string str;
  
  cin >> str;
  
  int l = str.size();
  int k = 0;
  int count = 0;
  for (int i=1; i<l; i++){
    if (str[i] == str[i-1]){
      count++;
    }
    else {
      
    }
  }
}
