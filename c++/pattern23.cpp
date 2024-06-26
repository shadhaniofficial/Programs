/*
12340
23401
34012
40123
01234
*/

#include<bits/stdc++.h>
using namespace std;
void pattern(int m){
  int n=1;
  for(int i=0; i<m; i++){
    for(int j=0; j<m; j++){
      cout << n;
      n++;
      if(n>=m){
        n = 0;
      }
    }
    n++;
    if(n>=m){
      n=0;
    }
    cout << endl;
  }
}


int main(){
  int n;
  cout << "Enter the Value: ";
  cin >> n;
  pattern(n);
}
