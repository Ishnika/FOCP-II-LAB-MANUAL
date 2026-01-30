/* supermarket software maintains item price lists. Implement a solution to store the prices of 10 items in an array and 
display the maximum price.*/
#include<iostream>
int main()
{
    int arr[10];
    std::cout<<"\nenter the prices of the items";
    int i;
    for(i=0;i<10;i++)
    {
        std::cout<<"\nenter the price of the "<<i+1<<" item:";
        std::cin>>arr[i];
    }
    int max=0;
    for(i=0;i<10;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    std::cout<<"\nTHE MAXIMUM PRICE IS:"<<max;
    return 0;
}
