  #include <iostream>
  using namespace std;

  // Function to calculate GCD
  int gcd(int a, int b) {
      if (b == 0)
          return a;
      else
          return gcd(b, a % b);
  }

// Function to calculate LCM
int lcm(int a, int b) {
    return abs(a * b) / gcd(a, b);
}

int main() {
    int num1, num2;
    
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    
    cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm(num1, num2) << endl;
    
    return 0;
}
