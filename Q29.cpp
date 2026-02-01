/* A weather monitoring app records 10-day temperature logs. Implement a solution to store daily temperatures in an array and 
display the minimum temperature for the month.*/
#include<iostream>
int main()
{
    int arr[10];
    
    int i;
    for(i=0;i<10;i++)
    {
       std::cout<<"\nENTER THE TEMPRATURES:";
       std::cin>>arr[i];
    }
    int min=arr[0];
    for(i=0;i<10;i++)
    {
        if(arr[i]<min)
        min=arr[i];
    }
    std::cout<<"\nthe minimum temprature is:"<<min;
    return 0;
}
