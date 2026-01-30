/*Create a program that takes multiple numbers as input and calculates their sum while using Continue to skip negative numbers
and break to stop input if the user enters a specific value.*/
#include<iostream>
int main()
{
    int num;
    std::cout<<"ENTER ZERO WHEN YOU WANT TO STOP ADDING\nEnter the number:";
    std::cin>>num;
    int count=num;
    while(num!=0)
    {
        std::cout<<"\nthe sum of the numbers till now is :"<<count;
        std::cout<<"\nenter the number:";
        std::cin>>num;
        if(num>0)
        {
            count+=num;
        }
        else if(num==0)
        {
            break;
        }
        else 
        {
            continue;
        }
    }
    return 0;
}
