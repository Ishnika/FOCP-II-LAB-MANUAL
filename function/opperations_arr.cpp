/*Implement the following functions: int sumArray(int arr[], int size); double average(int arr[], int size);
bool contains(int arr[], int size, int key);*/
#include<iostream>
int sumArray(int arr[],int size);
double average(int arr[],int size);
bool contains(int arr[],int size,int key);
int main()
{
    int size;
    std::cout<<"\nEnter the size of the array:";
    std::cin>>size;
    int arr[size];
    std::cout<<"\nenter the values in the array:";
    for(int i=0;i<size;i++)
    {
        std::cin>>arr[i];
    }
    int key;
    std::cout<<"\nEnter the value of the key:";
    std::cin>>key;
    std::cout<<"\nThe sum of the values of the array is :";
    int sum=sumArray(arr,size);
    std::cout<<sum;
    std::cout<<"\nThe average of the values of the array is:";
    double avg=average(arr,size);
    std::cout<<avg;
    bool val=contains(arr,size,key);
    std::cout<<"\n The key is available or not:"<<val;
    return 0;
}
int sumArray(int arr[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
double average(int arr[],int size)
{
    if (size==0)
    return 0;
    else 
    {double sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    double avg=sum/size;
    return avg;}
}
bool contains(int arr[],int size,int key)
{
    int flag=0;
    for(int i=0;i<size;i++)
    {
        if (arr[i]==key)
        {
            flag=1;
            break;
        }
        else 
        continue;
    }
    if(flag==0)
        return false ;
        else 
        return true;
}
