#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  vector<int> vec={3,3,5,1,3};
  cout << "Extra Candies: ";
  cin >> n;
  auto maxElementIterator = max_element(vec.begin(), vec.end());
  int maxElement = *maxElementIterator;
  for(auto i: vec){
    if (i + n >= maxElement) {
            cout << "True" << endl; 
        } else {
            cout << "False" << endl;
        }
  }
}
