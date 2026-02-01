/*A data analytics tool flips rows and columns for better visualization. Implement a solution to store a 3×3 matrix and 
compute its transpose*/
#include<iostream>
int main()
{
    int arr[3][3];
    int r,c;
    for(r=0;r<3;r++)
    {
        std::cout<<"\nenter the values for the row "<<r+1;
        for(c=0;c<3;c++)
        {
            std::cin>>arr[r][c];
        }
    }
    std::cout<<"\n THE TRANSPOSE OF THE MATRIX IS :";
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            if(r==c)
            std::cout<<arr[r][c]<<" ";
            else 
            std::cout<<arr[c][r]<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}
