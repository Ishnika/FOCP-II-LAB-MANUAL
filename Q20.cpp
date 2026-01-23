/*A printing press needs to repeat labels in a fixed tabular layout. Implement a solution to display:
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5 here no. of rows are 3 and columns are 5*/
#include<iostream>
int main()
{
    int row,column;
    std::cout<<"enter the number of rows and column:";
    std::cin>>row>>column;
    int i;
    for(i=1;i<=row;i++)
    {
        for(int j=1;j<=column;j++)
        {
            std::cout<<j<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}
