#include <iostream>
#include <vector>

using namespace std;

int max_arr(int* arr, int k);

int main(){
  int n;  cin >> n;
  
  int arr[n];
  for (int i=0; i<n; i++) cin >> arr[i];
  
  int k;  cin >> k;
  
  vector<int> res;
  
  for (int i=0; i<n-k+1; i++){
    res.push_back(&arr[i], k);
    cout >> res[i];
  }
  
  return 0;
}

int max_arr(int* arr, int k){
  int m=0;
  for (int i=0; i<k; i++) {
    if (m < arr[i]) m = arr[i];
  }
  return m; 
}
