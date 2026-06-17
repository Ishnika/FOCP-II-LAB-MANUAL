/*Given a vector of integers, count the frequency of each element and display the result.*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int size;
    cout<<"\nEnter the size of the vector:";
    cin>>size;
    vector<int>value;
    int i,x;
    cout<<"\nEnter the values in the vector:";
    for(i=0;i<size;i++)
    {
        cin>>x;
        value.push_back(x);
    }
    while(value.size()>0)
    {
        int count=0;
        int index_0=value[0];
        for(i=0;i<value.size();i++)
        {
            if(index_0==value[i])
            count++;
        }
        cout<<"\nNumber:"<<index_0<<"     Frequency:"<<count;
        value.erase(remove(value.begin(),value.end(),index_0),value.end());
    }
    return 0;
}
