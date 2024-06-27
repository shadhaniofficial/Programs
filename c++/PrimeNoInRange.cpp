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

//method1

void _Prime(int start, int end){
  vector<int> prime;
  int n = start;
  int size;
  for(int i=start; i<end; i++){
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

// method 2

void _Prime1(int start, int end){
    vector<int> prime;
    for(int i = start; i <= end; i++){
        if(prime_num(i)){
            prime.push_back(i);
        }
    }

    for(const auto& p : prime){
        cout << p << " ";
    }
    cout << endl;
}

int main(){
  int s,e;
  cout << "Enter the range: ";
  cin >> s >> e;
  _Prime(s,e);
  
}
