/*A CAD tool generates rectangular hollow frames. Implement a solution to display:
********
*      *
*      *
*      *
*      *
*      *
*      *
******** */
#include<iostream>
int main()
{
    int c,r;
    std::cout<<"Enter the number of rows and columns:";
    std::cin>>r>>c;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==0 || i==r-1)
            {
                std::cout<<"*";
            }
            else 
            {
                if(j==0 || j==c-1)
                {
                    std::cout<<"*";
                }
                else 
                {
                    std::cout<<" ";
                }
            }
        }
        std::cout<<"\n";

    }
    return 0;
}

