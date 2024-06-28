#include <iostream>

using namespace std;

int leading_zeros(int num);

int main(){
  
  int n;
  cout << "Enter the number: ";
  cin >> n;
  cout << "Leading zeros : " << leading_zeros(n);
  return 0;
}

int leading_zeros(int num){
  int count = 8*sizeof(int);
  while(num) {
    num/=2;
    count--;
  }
  return count;
}
