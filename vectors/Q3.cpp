/*Write a program to remove duplicate elements from a vector and print the updated vector.*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int num;
    cout<<"\nEnter the size of the vector:";
    cin>>num;
    vector<int>val(num);
    int i;
    for(i=0;i<num;i++)
    {
        cout<<"\nEnter the value:";
        cin>>val[i];
    }
    vector<int>dup;
    for(i=0;i<num;i++)
    {
        if(find(dup.begin(),dup.end(),val[i])!=dup.end())
            continue;
        else
        {
            dup.push_back(val[i]);
        }
    }
    cout<<"\nThe reversed array is:";
    for(i=0;i<dup.size();i++)
    {
        cout<<"\n"<<dup[i];
    }
    return 0;
}
