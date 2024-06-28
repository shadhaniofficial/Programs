#include <iostream>
using namespace std;

int GCD(int x, int y);
int Gcd(int x, int y);
int gcd(int x, int y);

static int count1 = 1;
static int count2 = 1;
static int count3 = 1;

int main(){
  int num1, num2;
  
  cout << "Enter 1st Number: ";
  cin >> num1;
  cout << "Enter 2nd Number: ";
  cin >> num2;
  
  cout << "The GCD of the given two numbers were " << GCD(num1, num2) << endl; 
  cout << "The Gcd of the given two numbers were " << Gcd(num1, num2) << endl;
  cout << "The gcd of the given two numbers were " << gcd(num1, num2) << endl;
  
  cout << "GCD count = " << count1 << endl;
  cout << "Gcd count = " << count2 << endl;
  cout << "gcd count = " << count3 << endl;
  return 0;
}
  
int GCD(int x, int y){
  int min = x, r;
  if (x>y)  min = y;
  for (int i=1; i<min; i++){
    if ((x%i==0) && (y%i==0)) r=i;
    count1++;
  }
  return r;
}

int Gcd(int x, int y){        // more preferable
  if(y==0)  return x;
  count2++;
  return Gcd(y, x%y);
}


int gcd(int x, int y){
  if(y==0)  return x;
  count3++;
  int n = x-y;
  if (n<0) n*=-1;
  return gcd(y, n);
}
