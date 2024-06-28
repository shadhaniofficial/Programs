#include <iostream>
#include <vector>

using namespace std;

int main(){
  
  vector <int> vec; // vec = []
  
  int n = 5;
  int temp;
  
  while(n){
    cin >> temp;
    vec.push_back(temp);
    n--;
  }
  
  for (int i=0; i<5; i++){
    cout << vec[i] << ' ';
  }
  
  return 0;
}

