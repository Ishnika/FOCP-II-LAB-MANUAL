/*write a reccursive function to calculate the sum of the digits of a number*/
#include<iostream>
int sum(int n);
int main()
{
    int num;
    std::cout<<"\nENter the number:";
    std::cin>>num;
    int result=sum(num);
    std::cout<<result;
    return 0;
}
int sum(int n)
{   
    if (n==0)
    return 0;
    return (n%10)+sum(n/10);
}
