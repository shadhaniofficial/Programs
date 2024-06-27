#include<bits/stdc++.h>
using namespace std;

void prime_num(int n){
  //i= sqrt(n) { i*i = n }
  if(n<2){
    cout << "Not a Prime Number";
  }
  else{
    for(int i = 2 ; (i*i)<=n; i++){
      if(n%i == 0){
        cout << "Not a prime Number";
        exit(0);
      }
    }
    cout << "Prime Number";
  }
}

int main(){
  int n;
  cout << "Enter the number: ";
  cin >> n;
  prime_num(n);
}
