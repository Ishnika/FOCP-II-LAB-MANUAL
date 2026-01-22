/*A calendar app calculates whether February has 29 days. Implement a solution to check if a year is a leap year or not.*/
#include<iostream>
int main()
{
    int year;
    std::cout<<"enter the year:";
    std::cin>>year;
    if(year%4==0 && year%100!=0 || year%400==0)
    {
        std::cout<<year<<" is a leap year";
    }
    else 
    {
        std::cout<<year<<" is not a leap year";
    }
    return 0;
}
