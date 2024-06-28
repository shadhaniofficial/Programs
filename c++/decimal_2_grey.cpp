#include <iostream>

using namespace std;

int grey(int data) {
  return data ^ (data >> 1);
}

int pow(int data) {
  return 1<<data;
}

int main() {

  int n;
  cout << "Enter the number of bits: ";
  cin >> n;
  int l = pow(n);
  int a[l]; // Use dynamic allocation instead of VLA for older compilers
  for (int i = 0; i < l; i++) a[i] = grey(i);

  cout << "Gray code sequence for " << n << " bits:\n";
  for (int i = 0; i < l; i++) cout << a[i] << ' ';

  return 0;
}

