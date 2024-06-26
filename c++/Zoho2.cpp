/*

ip: 34 6 2 4 12 8 9 1 23

op: 34 1 23 2 12 4 9 6 8

only 2 loops, 

even pos= dec order
odd pos= ass order

*/

#include<iostream>
using namespace std;

int main(){
  int arr[]={34,6,2,4,12,8,9,1,23};
  int n = 9;
  int temp;
  for(int i=0; i<n-1; i++){
    for(int j=i+1; j<n; j++){
      if (i%2){ //for odd pos 
        if (arr[i] > arr[j]){
          temp = arr[i];
          arr[i] = arr[j];
          arr[j] = temp;
        }
      }
      else{ //for even pos 
        if (arr[i] < arr[j]){
          temp = arr[i];
          arr[i] = arr[j];
          arr[j] = temp;
        }
      }
    }
  }
  
  for (int i=0; i<n; i++){
    cout << arr[i] << ' ';
  }
  cout << endl;
}
