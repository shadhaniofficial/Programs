// number of digits

#include<bits/stdc++.h>
using namespace std;
// method 1
int count1(int n){
  int cnt = (int)(log10(n)+1);
  cout << "using log10: ";
  return cnt;
  cout << endl;
}
// method 2
int main(){
  int n;
  cout << "Enter a number: ";
  cin >> n;
  count1(n);
  int count = 0; 
  while(n){
    n=n/10;
    count++;
  }
  cout << count << endl;
}
