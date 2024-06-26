#include<bits/stdc++.h>
using namespace std;

int main(){
  int arr[5]={10,4,5,9,2};
  int target;
  cout << "Enter the target: ";
  cin >> target;
  int count=0;
  for(auto i:arr){
    count += (i<target);
  }
  cout << count;
}
