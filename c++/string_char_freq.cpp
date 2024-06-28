//aaaaaajjjjjbbffhh
//
//a6j5b2f2h2 

#include <iostream>
#include <string>

using namespace std;

int main(){

  string str;
  cin >> str;  
  char temp = str[0];
  int count=1;
  
  for (int i=1; i<str.size()+1; i++){
    if ( temp != str[i] ){
      cout << temp << ':' << count << ' ';
      count = 1;
      temp = str[i];
      continue;
    }
    count++;
  }
  
  return 0;
}
