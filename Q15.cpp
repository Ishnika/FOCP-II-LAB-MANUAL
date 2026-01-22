/*A data analytics tool finds the maximum sales figure from multiple entries. Implement a solution to accept ‘n’ numbers and 
display the largest.*/
#include<iostream>
int main()
{
    int n,i;
    std::cout<<"enter the no.of numbers you want to enter:";
    std::cin>>n;
    int num;
    std::cout<<"enter the number:";
    std::cin>>num;
    int cop=num;
    for(i=1;i<n;i++)
    {
        std::cout<<"enter the number:";
        std::cin>>num;
        if(cop<num)
        cop=num;
    }
    std::cout<<"the greatest number is:"<<cop;
    return 0;
}
