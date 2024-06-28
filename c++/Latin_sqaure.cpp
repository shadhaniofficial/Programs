#include <iostream>

using namespace std;

int main(){
  int key;
  cin >> key;
  char c = 'A';
  
  for (int i=0; i<key; i++){
    for (int j=i; j<key+i; j++){
      char t = c+j%key;
      cout << t << ' ';
    }
    cout << endl;
  }
  
  cout << endl;
  
  return 0;
}
