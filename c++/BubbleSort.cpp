#include <iostream>
using namespace std;
int main(){
  int temp=0;
  int n=4;
  int arr[] = {4,3,2,1};
  for(int i=0; i < n-1; i++){
    for(int j=i+1; j<n; j++){
      if(arr[i]>arr[j]){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  for(int i=0; i<n; i++){
    cout << arr[i];
  }
}
