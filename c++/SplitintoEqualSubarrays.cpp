/*Check if the array can be split . And Sum of subarrays are equal for 2 subarrays of the array.
Eg : (1,5,11,5) 
(1,5,5)(11)
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
  
  vector<int> arr = {1,5,11,5,2};
  int n = arr.size();
  int sum = arr[0];
  for(int i=1; i<n; i++){
    sum += arr[i];
  }
  vector<int>res1;
  vector<int>res2;
  sort(arr.begin(),arr.end());
  if(sum % 2 == 0){
    int temp = 0;
    for(int j=0; j<n; j++){
      temp += arr[j];
      if(temp <= sum/2){
        res1.emplace_back(arr[j]);
      }
      else{
        res2.emplace_back(arr[j]);
      }
    }
    if(accumulate(res1.begin(),res1.end(),0) == accumulate(res2.begin(),res2.end(),0)){
      for(int i=0; i<res1.size();i++){
       cout << res1[i] << " ";
      }
      cout << endl;
      for(int i=0; i<res2.size();i++){
        cout << res2[i] << " ";
      }
    }
    else{
      cout << "Can't be split";
    }
  }
  else{
    cout << "The sum of array is ODD, so can't split";
  }
  return 0;
}


