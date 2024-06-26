#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int> original={1,2,1};
  vector<int> duplicate=original;
  duplicate.insert(duplicate.begin(),original.begin(),original.end());
  for(int i=0; i<duplicate.size(); i++){
    cout << duplicate[i] << " "; 
  }
}
