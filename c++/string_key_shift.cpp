#include <iostream>
#include <vector>
#include <string>

using namespace std;

char num(char c, int key);
char alpha(char c, int key);

int main(){

  string str1, str2;
  int key;
  
  cout << "Enter the String: ";
  cin >> str1;
  
  cout << "Enter the Key: ";
  cin >> key;
  
  str2 = str1;
  
  int l = str1.size();
  
  for (int i=0; i<l; i++){
    if (str1[i] >= '0' and str1[i] <= '9')  str2[i] = num(str1[i], key);
    if (str1[i] >= 'a' and str1[i] <= 'z')  str2[i] = alpha(str1[i], key);
    if (str1[i] >= 'A' and str1[i] <= 'Z')  str2[i] = alpha(str1[i] ^ 32, key) ^ 32;
  }
  
  cout << "The Encoded vakue is "<< str2;  
  
  return 0;
}

char num(char c, int key){
  key %= 10;
  char num[] = "01234567890";
  int i = c - '0';
  for (int j=0; j<key; j++){
    i++;
    if (i>9) i=0;
  }
  return num[i]; 
}


char alpha(char c, int key){
  key %= 26;
  char alp[] = "abcdefghijklmnopqrstuvwxyz";
  int i = c - 'a';
  for (int j=0; j<key; j++){
    i++;
    if (i>25) i=0;
  }
  return alp[i]; 
}
