#include <iostream>
#include <string>

using namespace std;

class Employee {
  private:
    string Name = "m";
    string Company = "n";
    int Age = 0;
  public:  
    void Intro(){
      cout << "Name - " << Name << endl;
      cout << "Company - " << Company << endl;
      cout << "Age - " << Age << endl;
    }
  
};

int main(){
  Employee emp1;
  
  emp1.Intro();
  
  return 0;
}
