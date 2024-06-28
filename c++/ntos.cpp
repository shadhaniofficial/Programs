#include <iostream>
#include <string>

using namespace std;

void reverse_number(int n);
void normal_number(int n);

int main(){
  int num;
  cout << "Enter the Number: ";
  cin >> num;
  normal_number(num);
  cout << endl;
  reverse_number(num);   
}

void normal_number(int n)
{
    if (n == 0)
    return;
    normal_number(n/10);
    switch (n%10){
      case 0 : cout << "zero "; break;
      case 1 : cout << "one "; break;
      case 2 : cout << "two "; break;
      case 3 : cout << "three "; break;
      case 4 : cout << "four "; break;
      case 5 : cout << "five "; break;
      case 6 : cout << "six "; break;
      case 7 : cout << "seven "; break;
      case 8 : cout << "eight "; break;
      case 9 : cout << "nine "; break;
    }
}
    
void reverse_number(int n)
{
    if(n == 0)
    return;
    switch (n%10){
      case 0 : cout << "zero "; break;
      case 1 : cout << "one "; break;
      case 2 : cout << "two "; break;
      case 3 : cout << "three "; break;
      case 4 : cout << "four "; break;
      case 5 : cout << "five "; break;
      case 6 : cout << "six "; break;
      case 7 : cout << "seven "; break;
      case 8 : cout << "eight "; break;
      case 9 : cout << "nine "; break;
    }
    reverse_number(n/10);
}
    
