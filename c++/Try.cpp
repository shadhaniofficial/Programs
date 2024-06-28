//INtersection of multiple arrays

#include <iostream>
using namespace std;

int main(){
  int n;

  cin >> n;

  int x = 0, y = 0;
  for (int i=1; i<=n; i++){
    for (int j=i; j<=n; j++){
      cout << y  + j << ' ';
      y += j;    
    }
    x += i;
    y = x-i;
    cout << endl;
  }  
  return 0;
}