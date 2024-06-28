#include <iostream>

using namespace std;

int main(){
  
  int n, i, sum = 0, x = 0, y = 0;
  cin >> n;
  
  int blocks[n];
  for (i=0; i<n; i++) cin >> blocks[i];
  
  for (i=0; i<n; i++) {
    x = max(x, blocks[i]);
    sum += x - blocks[i];
  }
  
  for (i=n-1; blocks[i] != x; i--) {
    y = max(y, blocks[i]);
    sum -= x - y;
  }
  
  cout << sum;
  
  return 0;
}
