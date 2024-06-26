/*
1 3 6 10 15
2 5 9 14 
4 8 13
7 12
11
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cout << "Enter the value: ";
  cin >> n;
  int num=1, num1=1, y = 1;
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n-i+1; j++){
      cout << num << ' ';
      num += i+j;
    }
    num = num1++ + y;
    y = num;
    cout <<  endl;
  }
}
