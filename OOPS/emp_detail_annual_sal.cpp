/*Store employee details and calculate annual salary.*/
#include<iostream>
class Employee
{
    int emp_id;
    std::string name;
    double sal;
    public:
    void InputDetails()
    {
        std::cout<<"\nEnter the employee ID, Name and the salary:";
        std::cin>>emp_id>>name>>sal;
    }
    double CalculateSalary()
    {
        return 12*sal;
    }
    void DisplayDetails()
    {
        std::cout<<"\nThe deatils are as follows:\nName:"<<name<<"\nEmployee Id:"<<emp_id<<"\nmonthly salary of the employee:"
        <<sal <<"\nAnnual salary of the employee:"<<CalculateSalary();
    }
};
int main()
{
   Employee E;
   E.InputDetails();
   double annual_sal=E.CalculateSalary();
   std::cout<<"\nThe annual salary is:"<<annual_sal;
   E.DisplayDetails();
   return 0;
}
