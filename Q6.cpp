/*An HR system needs to calculate employees’ net salaries, including a fixed 12% bonus for each worker.Implement a solution to 
accept the number of employees and their basic salary. Compute bonus, net salary, and display results.*/
#include<iostream>
int main()
{
    int num;
    std::cout<<"Enter the number of employees:";
    std::cin>>num;
    while(num>0)
    {
        int sal ;
        std::cout<<"\nEnter the salary of the employee:" ;
        std::cin>>sal;
        int f_sal=sal+(0.12*sal);
        std::cout<<"The salary after the bonus is:"<<f_sal;
        num--;
    }
    return 0;
}
