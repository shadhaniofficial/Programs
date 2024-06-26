#include <iostream>
using namespace std;
int max(int a,int b){
  return a<b?b:a;
}

void pattern1(int n, int c){
  for(int i=n; i>1; i--){
    cout << max(i,c) << " ";
    
  }
  for(int j=1; j<=n; j++){
    cout << max(j,c) << " ";   
  }
  cout << endl;
}

void pattern(int n){
  for(int i=n; i>1; i--){
    pattern1(n,i);
  }
  for(int j=1; j<=n; j++){
    pattern1(n,j);
  }
  
}
  
int main(){
int n;
cout << "Enter the Value: ";
cin >> n;
pattern(n);

}
