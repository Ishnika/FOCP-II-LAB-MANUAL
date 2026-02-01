/*A machine learning model multiplies matrices for neural network layers. Implement a solution to multiply two matrices of 
order m×n and p×q (if valid).*/
#include<iostream>
int main()
{
    int r1,c1,r2,c2;
    std::cout<<"\nenter the rows of the 1st matrix:";
    std::cin>>r1;
    std::cout<<"\nenter the coloumn of the 1st matrix:";
    std::cin>>c1;
    std::cout<<"\nenter the row of the 2nd matrix:";
    std::cin>>r2;
    std::cout<<"\nenter the column of the 2nd matrix:";
    std::cin>>c2;
    if(c1!=r1 || r1==0 || r2==0 ||c2==0)
    std::cout<<"\nINVALID INPUT!";
    else 
    {
        std::cout<<"\nENTER THE VALUES FOR THE 1ST MATRIX:";
        int arr_1[r1][c1];
        int arr_2[r2][c2];
        int i,j,k;
        std::cout<<"\nENTER THE VALUES FOR THE 1ST MATRIX";
        for(i=0;i<r1;i++)
        {
         std::cout<<"\nenter the values for the row "<<i+1<<":";
         for(j=0;j<c1;j++)
            {
              std::cin>>arr_1[i][j];
           }
            std::cout<<"\n";
        }
        std::cout<<"\nENTER THE VALUES FOR THE 2ND MATRIX:\n";
        for(i=0;i<r2;i++)
        {
            std::cout<<"\nenter the values for the row "<<i+1;
            for(j=0;j<c2;j++)
            {
                std::cin>>arr_2[i][j];
            }
            std::cout<<"\n";
        }
        int arr[r1][c2];
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                arr[i][j]=0;
            }
        }
        std::cout<<"\nTHE PRODUCT OF THE MATRIX";
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                for(k=0;k<c1;k++)
                {
                    arr[i][j]+=(arr_1[i][k]*arr_2[j][k]);
                }
            }
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                std::cout<<arr[i][j]<<" ";
            }
            std::cout<<"\n";
        }
   
    }
}
    
