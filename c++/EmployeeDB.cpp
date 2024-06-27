#include<bits/stdc++.h>
using namespace std;

class Employee{
  private:
    string name;
    int EmpId;
    
  public:
    Employee(string _name, int _EmpId){
      name = _name;
      EmpId = _EmpId;
    }
    
    int GetEmpId(){
      return EmpId;
    }
    
    string GetName(){
      return name;
    }
};

class EmployeeDataBase{
  private:
    vector<Employee> Database;
    int EmpCount;
    
  public:
    void AddEmp(string _name, int _EmpId){
      Employee NewEmp(_name, _EmpId);
      Database.push_back(NewEmp);
      cout << "Employee Added !";
      EmpCount = Database.size();
    }
    
    //void DeleteEmp(){
      
    //}
    
    void DisplayDB(){
      for(int i=0; i<EmpCount; i++){
        
        cout << "Employee " << i << " Name: " << Database[i].GetName() << endl;
        cout << "Employee " << i << " Id: " << Database[i].GetEmpId() << endl;
      }
    }
    
    
};

void menu(){
  cout << endl << "Employee Database" << endl;
  cout << "1. Add New Employee" << endl;
  cout << "2. Display All Employees" << endl;
  cout << "3. Exit" << endl;
}



int main(){
  int id;
  string Name;
  EmployeeDataBase db;
  while(true){
    int option;
    menu();
    cout << "Enter Your Option: ";
    cin >> option;
    switch(option){
      case 1:
        cout << "Enter the Name: ";
        cin >> Name;
        cout << "Enter the Employee ID: ";
        cin >> id;
        db.AddEmp(Name, id);
        break;
      case 2:
        cout << "\nAll Employess\n";
        db.DisplayDB();
        break;
      case 3:
        exit(0);
    }
  }
  return 0;
}
