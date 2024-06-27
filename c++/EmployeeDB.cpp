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
    
    // Method to delete an employee by their ID
    void DeleteEmpById(int empId) {
      for(auto it = Database.begin(); it!= Database.end(); ++it) {
        if(it->GetEmpId() == empId) {
            Database.erase(it);
            --EmpCount;
            cout << "Employee deleted successfully." << endl;
            return;
        }
      }
      cout << "No employee found with the given ID." << endl;
    }

    // Method to delete an employee by their name
    void DeleteEmpByName(string empName) {
      for(auto it = Database.begin(); it!= Database.end(); ++it) {
        if(it->GetName() == empName) {
            Database.erase(it);
            --EmpCount;
            cout << "Employee deleted successfully." << endl;
            return;
        }
      }
      cout << "No employee found with the given name." << endl;
    }
    
    
    void DisplayDB(){
      for(int i=0; i<EmpCount; i++){
        
        cout << "Employee " << i << " Name: " << Database[i].GetName() << endl;
        cout << "Employee " << i << " Id: " << Database[i].GetEmpId() << endl;
      }
    }
    
    
};

void menu(){
  cout << endl << "\nEmployee Database" << endl;
  cout << "1. Add New Employee" << endl;
  cout << "2. Display All Employees" << endl;
  cout << "3. delete Employee by Name" << endl;
  cout << "4. delete Employee by Employee Id" << endl;
  cout << "5. Exit" << endl;
}



int main(){
  int id;
  string Name;
  string del;
  int delid;
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
        cout << "Enter the Employee Name: ";
        cin >> del;
        db.DeleteEmpByName(del);
        break;
      case 4:
        cout << "Enter the Employee ID: ";
        cin >> delid;
        db.DeleteEmpById(delid);
        break;
      case 5:
        exit(0);
    }
  }
  return 0;
}
