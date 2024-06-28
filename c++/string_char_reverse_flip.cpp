// abc => zyx

#include <iostream>
#include <string>

using namespace std;

int main(){

  string str;
  
  cin >> str;
  
  for (int i=0; i < str.size() ; i++) str[i] = 'z' - (str[i] - 'a');
  
  cout << str;
  
  return 0;
}
