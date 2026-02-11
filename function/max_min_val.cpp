/*create a function to return the maximum and minimum values in an array*/
#include<iostream>
void findMinMax(int arr[],int size,int min_val,int max_val);
int main()
{
    int num;
    std::cout<<"\nEnter the size of the array:";
    std::cin>>num;
    int arr[num];
    int i;
    for (i=0;i<num;i++)
    {
        std::cin>>arr[i];
    }
    int min=arr[0];
    int max=arr[0];
    findMinMax(arr,num,min,max);
    return 0;
}
void findMinMax(int arr[],int num,int min_val,int max_val)
{
    for(int i=1;i<num;i++)
    {
        if(arr[i]<min_val)
        {
            min_val=arr[i];
        }
        if(arr[i]>max_val)
        {
            max_val=arr[i];
        }
    }
    std::cout<<"\nThe maximum value is:"<<max_val;
    std::cout<<"\nThe minimum value is:"<<min_val;
}
