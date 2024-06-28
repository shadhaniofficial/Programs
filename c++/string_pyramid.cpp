#include <iostream>
#include <string>
using namespace std;

int main(){

  string str, res;
  
  cout << "Enter the String: ";
  cin >> str;
  
  int l = str.size();
  int j=0;
  
  for (int i=l/2; i<l; i++){
     res[j] = str[i];
     j++;
  }
  for (int i=0; i<l/2; i++){
    res[j] =  str[i];
    j++;
  }
  
  for (int i=0; i<l; i++){
    for (int j=0; j<l-i; j++){
      cout << " ";
    }
    for (int j=0; j<=i; j++){
      cout << res[j];
    }
    cout << endl;
  }
  return 0;
}
