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
    int i;
    for(i=1;i<=id;i++)
    {
    if(i%3==0 && i%5==0)
    {
        std::cout<<"\nBUZZ AND FUZZ";
    }
    else if(i%3==0)
    {
        std::cout<<"\nBUZZ";
    }
    else if(i%5==0)
    {
        std::cout<<"\nFUZZ";
    }
    else 
    {
        std::cout<<std::endl<<i;
    }
}
    return 0;
}
