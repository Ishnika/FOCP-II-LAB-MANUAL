/*Write a program to rotate a vector to the right by k positions.
Example:
Input: [1,2,3,4,5], k = 2
Output: [4,5,1,2,3]*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int size;
    cout<<"\nEnter the size of the vector:";
    cin>>size;
    vector<int>v;
    int x;
    int k;
    cout<<"\nEnter the number of rotations:";
    cin>>k;
    cout<<"\nenter the vector:";
    for(int i=0;i<size;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    vector<int>dup;
    for(int i=0;i<v.size();i++)
    {
        dup.push_back(v[i]);
    }
    while(k>0)
    {
        for(int i=0;i<v.size();i++)
        {
            if(i==0)
            {
                v[i]=dup[v.size()-1];
            }
            else{
                v[i]=dup[i-1];
            }
        }
        for(int i=0;i<v.size();i++)
        {
            dup[i]=v[i];
        }
        k--;
    }
    cout<<"\nTHE REVERSED VECTOR IS:";
    for(int i=0;i<dup.size();i++)
    {
        cout<<"\n"<<dup[i];
    }
    return 0;
}
