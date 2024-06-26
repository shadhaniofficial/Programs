#include <iostream>
using namespace std;

/*
6 6 6 6 6 6 6 6 6 6 6 
6 5 5 5 5 5 5 5 5 5 6 
6 5 4 4 4 4 4 4 4 5 6 
6 5 4 3 3 3 3 3 4 5 6 
6 5 4 3 2 2 2 3 4 5 6 
6 5 4 3 2 1 2 3 4 5 6 
6 5 4 3 2 2 2 3 4 5 6 
6 5 4 3 3 3 3 3 4 5 6 
6 5 4 4 4 4 4 4 4 5 6 
6 5 5 5 5 5 5 5 5 5 6 
6 6 6 6 6 6 6 6 6 6 6 

*/

int max(int a, int b){
  return a<b?b:a;
}

void pattern(int n){
  for(int i=n; i>0; i--){
    for(int j=n; j>0; j--){
      cout << max(j,i);
      cout << " ";
    }
    for(int j=2; j<=n; j++){
      cout << max(j,i);
      cout << " ";
    }
    cout << endl;
  }
  for(int i=2; i<=n; i++){
    for(int j=n; j>0; j--){
      cout << max(j,i);
      cout << " ";
    }
    for(int j=2; j<=n; j++){
      cout << max(j,i);
      cout << " ";
    }
    cout << endl;
  }
}

int main(){
int n;
cout << "Enter the Value: ";
cin >> n;
pattern(n);

}
