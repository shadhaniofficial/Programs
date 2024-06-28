#include <iostream>

using namespace std;

int main(){
  int n;
  cin >> n;
  int i,j;
  for (i=n; i>0; i--){
    for(j=0; j<i; j++)  cout << '*';
    for(j=i; j<n; j++)  cout << "  ";
    for(j=0; j<i; j++)  cout << '*';
    cout << endl;
  }
  for (i=1; i<=n; i++){
    for(j=0; j<i; j++)  cout << '*';
    for(j=i; j<n; j++)  cout << "  ";
    for(j=0; j<i; j++)  cout << '*';
    cout << endl;
  }
}
