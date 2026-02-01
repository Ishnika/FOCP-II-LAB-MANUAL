/*A payroll system maintains employee salary records. Implement a solution to accept salary of 10 employees in an array,
compute total salary and average salary, then display the result.*/
#include<iostream>
int main()
{
    int arr[10];
    std::cout<<"\nENTER THE SALARIES:";
    int i;
    for(i=0;i<10;i++)
    {
        std::cout<<"\nenter the salary of "<<i+1<<" employee:";
        std::cin>>arr[i];
    }
    int sum=0;
    for(i=0;i<10;i++)
    {
        sum+=arr[i];
    }
    float avg=(float)sum/10;
    std::cout<<"\nTHE TOTAL SALARY IS:"<<sum<<"\nTHE AVERAGE SALARY IS:"<<avg;
    return 0;
}
