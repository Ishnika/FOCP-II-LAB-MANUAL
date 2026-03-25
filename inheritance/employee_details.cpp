/*Create two classes: Employee with name, and Department with department name. Derive a class Manager that displays both 
employee name and department.Demonstrate usage through object creation.*/

#include<iostream>
using namespace std;
class Employee
{
    string name;
    public:
    Employee()
    {
        name="none";
    }
    Employee(string a)
    {
        name=a;
    }
    void DisplayName()
    {
        cout<<"\nThe name of the employee is:"<<name;
    }
};
class Department
{
    string dep_name;
    public:
    Department()
    {
        dep_name="none";
    }
    Department(string a)
    {
        dep_name=a;
    }
    void DisplayDepName()
    {
        cout<<"\n the name of the department is:"<<dep_name;
    }
};
class Manager:public Employee, public Department
{
    public:
    Manager(){}
    Manager(string i,string j):Employee(i),Department(j){}
    void DisplayDetails()
    {
        DisplayName();
        DisplayDepName();
    }
};
int main()
{
    Manager M1,M2("ishnika","tech department");
    M1.DisplayDetails();
    M2.DisplayDetails();
    return 0;
}
