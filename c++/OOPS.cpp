#include <iostream>
#include <string>

using namespace std;

class Employee {
  private:
    string Name;
    string Company;
    int Age;
  
  public:
    void setName(string data){
      Name = data;
    }
    
    void setCompany(string data){
      Company = data;
    }
    
    void setAge(int data){
      Age = data;
    }
    
    void Intro(){
      cout << "Name - " << Name << endl;
      cout << "Company - " << Company << endl;
      cout << "Age - " << Age << endl;
    }
    
    Employee(string name, string company, int age){
      Name = name;
      Company = company;
      Age = age;
    }
  
};

int main(){

  Employee emp1 = Employee("AAA", "bbb", 25);
  emp1.setAge(34);
  emp1.Intro();
  
  return 0;
}
