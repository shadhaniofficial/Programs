#include<bits/stdc++.h>
using namespace std;

void _revstr(string str){
  string str2 = ""; 
 for(int i=str.length()-1; i>=0; i--){ 
    str2 += str[i]; 
 }
 cout << str2 << endl;
}

int main(){
  string str;
  cout << "Enter the string: ";
  cin >> str;
  _revstr(str);
  return 0;
}
