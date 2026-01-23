/*A board displays reverse seating layouts for events. Implement a solution to print:
5 4 3 2 1
5 4 3 2
5 4 3
5 4
5*/
#include<iostream>
int main()
{
    int r,c;
    std::cout<<"Enter the number of rows and columns:";
    std::cin>>r>>c;
    int i,j;
    for(i=1;i<=r;i++)
    {
        for(j=c;j>=i;j--)
        {
            std::cout<<j<<" ";
        }
        std::cout<<"\n";
    }
    return 0;
}
