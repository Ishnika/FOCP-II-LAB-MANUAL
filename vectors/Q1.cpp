/*Write a C++ program to input n integers and store them in a vector. Print the sum, maximum, and minimum element of the 
vector.*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n ;
    cout<<"Enter the numbers to enter:";
    cin>>n;
    int count=0;
    vector<int>num(n);
    for(int i=0;i<n;i++)
    {
        cout<<"\nenter the value:";
        cin>>num[i];
    }
    int max=num[0];
    int min=num[0];
    for(int i=0;i<n;i++)
    {
        count+=num[i];
        if (num[i]>max)
        max=num[i];
        if(num[i]<min)
        min=num[i];
    }
    cout<<"\nthe sum is:"<<count<<"\nthe maximum value is:"<<max<<"\nthe minimum value is:"<<min;
    return 0;
}
