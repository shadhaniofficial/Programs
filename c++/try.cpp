#include<bits/stdc++.h>
using namespace std;

void prime_num(int n){
  //i= sqrt(n) { i*i = n }
  int count=0;
  for(int i=1; i*i <= n; i++){
    if(n%i == 0){
      count++;
    }
    if((n/i)!=i){
      count++;
    }
  }
  if(count == 2){
    cout << "Prime Number";
  }
  else{
    cout << "Not a Prime Number";
  }
}

int main(){
  int n;
  cout << "Enter the number: ";
  cin >> n;
  prime_num(n);
}
