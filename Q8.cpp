/*A monitoring system generates a sequence of numeric event IDs from 1 to N. nTo make logs easier to analyse, the system 
applies tags to certain events based on predefined rules:
• Events whose ID is divisible by 3 are tagged as “Buzz”
• Events whose ID is divisible by 5 are tagged as “Fuzz”
• Events divisible by both 3 and 5 receive both tags*/

#include<iostream>
int main()
{
    int id;
    std::cout<<"\nEnter your ID:";
    std::cin>>id;
    if(id%3==0 && id%5==0)
    {
        std::cout<<"\nBUZZ AND FUZZ";
    }
    else if(id%3==0)
    {
        std::cout<<"\nBUZZ";
    }
    else if(id%5==0)
    {
        std::cout<<"\nFUZZ";
    }
    else 
    {
        std::cout<<"\nNO TAG AVAILABLE";
    }
    return 0;
}
