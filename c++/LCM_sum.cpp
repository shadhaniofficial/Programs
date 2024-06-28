#include <iostream>

using namespace std;

int GCD( int a, int b){
  if (a){
    return GCD (b%a, a);
  }
  else{
    return b;
  }
}

int lcm( int a, int b){
  return a*b/GCD(a,b);
}

int main(){
  int n;
  cout << "Enter the number" << endl;
  cin >> n;
  int t=0;
  for (int i=1; i<=n; i++){
    t += lcm(i,n);
  }
  cout << "LCM sum: " << t << endl;
  return 0;
}
