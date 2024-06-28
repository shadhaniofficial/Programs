#include <iostream>
#include <vector>

using namespace std;

int main(){

  vector<int> vec;
  
  int n;
  int t;
  int s=0; 
  
  cin >> n;
  
  for (int i=0; i<n; i++){
    cin >> t;
    vec.push_back(t);
  }
  
  int l = vec.length();
  
  for (int i=0; i<n-2; i++){
    sort(vec.begin(), vec.end());
    t = vec[0] + vec[1];
    vec.pop_front();
  }
  
  cout << t;
}
