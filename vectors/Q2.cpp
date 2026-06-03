/*Given a vector of integers, reverse the vector without using any built-in reverse function.*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int num;
    cout<<"\nEnter the length of the vector;";
    cin>>num;
    vector<int>val(num);
    int i;
    for(i=0;i<num;i++)
    {
        val[i]=i+1;
    }
    for(i=num-1;i>=0;i--)
    {
        cout<<"\nvalue="<<val[i];
    }
    return 0;
}
