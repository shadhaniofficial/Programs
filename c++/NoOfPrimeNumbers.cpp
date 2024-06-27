#include<bits/stdc++.h>
using namespace std;

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

void _Prime(int range){
  vector<int> prime;
  int n = 0;
  int size;
  for(int i=0; i<range; i++){
    n++;
    int res = prime_num(n);
    if(res == 1){
      prime.emplace_back(n);
    }
  }
  size = prime.size();
  for(int k=0; k<size; k++){
    cout << prime[k] << " ";
  }
}



int main(){
  int n;
  cout << "Enter the number: ";
  cin >> n;
  _Prime(n);
  
}
