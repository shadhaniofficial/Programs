// GCD or HCF
#include<bits/stdc++.h>
using namespace std;

int _min(int a, int b){
  return a<b?a:b;
}
// Brutforce
int GCD(int n1, int n2){
  int gcd1;
  for(int i=_min(n1,n2); i>=1; i--){
    if(n1 % i == 0 and n2 % i == 0){
      gcd1 = i;
      break;
    }
  }
  return gcd1;
}

// Method 2
int GCD_2(int a, int b) {

/*
35 28
28 7
7 0
GCD: 7  
*/

    if (b == 0)
        return a;
    return GCD_2(b, a % b);
}

int main(){
  int n1,n2;
  cout << "Enter the numbers: ";
  cin >> n1 >> n2;
  int gcd = GCD_2(n1,n2);
  cout << "GCD: " << gcd;
  return 0;g
}
