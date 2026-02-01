/*A manufacturing QC system checks defect codes divisible by both 3 and 5.Implement a solution to store 5 elements in an array
and count how many numbers are divisible by 3 and 5.*/
#include<iostream>
int main()
{
    int arr[5];
    std::cout<<"\nENTER THE NUMBERS:";
    int i ;
    for(i=0;i<5;i++)
    {
        std::cout<<"\nenter the "<<i+1<<" number:";
        std::cin>>arr[i];
    }
    int count=0;
    for(i=0;i<5;i++)
    {
        if(arr[i]%3==0 && arr[i]%5==0)
        count++;
    }
    std::cout<<"THE TOTAL NUMBERS DIVISIBLE BY 3 AND 5 ARE:"<<count;
    return 0;
}
