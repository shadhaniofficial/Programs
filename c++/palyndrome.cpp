#include<iostream>
#include<string.h>
using namespace std;

int main(){
  string word;
  cout << "Enter a Word: ";
  cin >> word;
  int n = word.size();
  int temp=0;
  for(int i=0; i<n; i++){
      temp = (word[i]!=word[n-i-1]);
  }
  if(count==0){ 
    cout << "Palyndrome";
  }
  else{
    cout << "Not a Palyndrome";
  }
}
