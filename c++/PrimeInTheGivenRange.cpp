#include<bits/stdc++.h>
using namespace std;

// finds the num is prime or not
bool prime_num(int n){
  //i= sqrt(n) { i*i = n }
  if(n<2){
    return false;
  }
  else{
    for(int i=2; i*i<=n; i++){
      if(n%i == 0){
        return false;
      }
    }
    return true;
  }
  
}




void _RangePrime(int n){
  vector<int> prime;
  int size = 0;
  int m = 2;
  while(size!=n){
    int res = prime_num(m);
    if(res == 1){
      prime.emplace_back(m);
    }
    m++;
    size = prime.size();
  }
  for(int i=0; i<size; i++){
    cout << prime[i] << " ";
  }
}

int main(){
  int s;
  cout << "Enter the range: ";
  cin >> s;
  _RangePrime(s);
  
}
