#include<bits/stdc++.h>
using namespace std;

int main(){
  int count=0;
  int arr[]={1,2,3,1,1,3};
  for(int i=0; i<5; i++){
    for(int j=i+1; j<6; j++){
      count += (arr[i]==arr[j]);
      
    }
  }
  cout << "count : " << count;
}

