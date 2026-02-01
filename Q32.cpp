/*A stock market app tracks first and second highest stock values. Implement a solution to find the largest and second largest 
number in an array of size 5.*/
#include<iostream>
int main()
{
    int arr[5];
    std::cout<<"\nENTER THE NUMBERS:";
    int i;
    for(i=0;i<5;i++)
    {
        std::cout<<"\nenter the number:";
        std::cin>>arr[i];
    }
    int max_1,max_2;
    if(arr[0]>arr[1])
    {
        max_1=arr[0];
        max_2=arr[1];
    }
    else 
    {
        max_1=arr[1];
        max_2=arr[0];
    }
    for(i=2;i<5;i++)
    {
        if(arr[i]>max_1)
        {
            max_2=max_1;
            max_1=arr[i];
        }
        else if(max_2<arr[i])
        {
            max_2=arr[i];
        }
    }
    std::cout<<"\nthe first largest value is:"<<max_1<<"\nthe second largest value is:"<<max_2;
    return 0;
}
