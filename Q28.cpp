/*A data processing system classifies even and odd inputs separately. Implement a solution to store 5 elements in an array, 
compute sum of all even and sum of all odd numbers.*/
#include<iostream>
int main()
{
    int arr[5];
    std::cout<<"ENTER THE NUMBERS:";
    int i;
    for(i=0;i<5;i++)
    {
        std::cout<<"\nenter the value of the "<<i+1<<" position:";
        std::cin>>arr[i];
    }
    int sum_odd=0,sum_even=0;
    for(i=0;i<5;i++)
    {
        if(arr[i]%2==0)
        sum_even+=arr[i];
        else 
        sum_odd+=arr[i];
    }
    std::cout<<"THE SUM OF THE ODD NUMBERS IS:"<<sum_odd<<"\nTHE SUM OF THE EVEN NUMBERS IS:"<<sum_even;
    return 0;
}
