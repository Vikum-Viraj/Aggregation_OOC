#include <iostream>
#include <string>

#define SIZE 2

using namespace std;

class Employee
{
private:
  string empID;
string  name;

public:
Employee(string emp, string nme)
{
  empID = emp;
  name = nme;
}
void DisplayEmployee()
{
  cout << "Employee id : "<< empID<< endl;
  cout << "Employee name : "<< name << endl;
  cout << "************************"<< endl;
}
~Employee()
{
  cout << "Delete Employee" << endl;
}

};

class Department
{

private:
Employee *emp[SIZE];

public:
Department()
{
  
}
void addEmployee(Employee *emp1,Employee *emp2)
{
  emp[0] = emp1;
  emp[1] = emp2;
}
void DisplayDepartment()
{
  for(int r=0; r<SIZE;r++)
    emp[r]->DisplayEmployee();
}
~Department()
{
  cout << "Department delete " << endl;
}

};

//client programme

int main()
{
  Employee *e1 = new Employee("E001","Nimal");
  Employee *e2 = new Employee("E002","Jagath");

  Department *ORAL = new Department();

  ORAL->addEmployee(e1,e2);
    ORAL->DisplayDepartment();

  delete e1;
  delete e2;
  
  cout << endl;
  
  Employee *e3 = new Employee("E002","Primal");
  Employee *e4 = new Employee("E003","Yohara");

  ORAL->addEmployee(e2,e3);
  ORAL->DisplayDepartment();

  cout << endl;

  delete e3;
  delete e4;
  
  return 0;
  
}





