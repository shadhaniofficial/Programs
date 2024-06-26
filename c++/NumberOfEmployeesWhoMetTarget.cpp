#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int> hours={5,1,4,2,2};
  int target = 6;
  int count = 0;
  for(auto i:hours){
    count+=(target<=i);
  }
  cout << count;
}
