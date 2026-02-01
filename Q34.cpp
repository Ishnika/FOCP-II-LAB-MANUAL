/*A graphics rendering engine adds pixel intensity matrices. Implement a solution to store two 3×3 matrices and compute their 
sum.*/
#include<iostream>
int main()
{
    int arr_1[3][3];
    int arr_2[3][3];
    int r,c;
    std::cout<<"\nFOR THE FIRST MATRIX:";
    for(r=0;r<3;r++)
    {
        std::cout<<"\nenter the values for row "<<r+1<<':';
        for(c=0;c<3;c++)
        {
            std::cin>>arr_1[r][c];
        }
    }
    std::cout<<"\nFOR THE SECOND MATRIX:";
    for(r=0;r<3;r++)
    {
        std::cout<<"\nenter the values for row "<<r+1<<':';
        for(c=0;c<3;c++)
        {
            std::cin>>arr_2[r][c];
        }
    }
    std::cout<<"\nTHE SUM OF THE TWO MATRICES IS\n:";
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            arr_1[r][c]+=arr_2[r][c];
        }
    }
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            std::cout<<" "<<arr_1[r][c];
        }
        std::cout<<std::endl;
    }
    return 0;
}
