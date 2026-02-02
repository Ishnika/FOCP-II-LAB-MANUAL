/*In software applications such as data analytics and probability systems, combinatorial values are frequently
required. To ensure efficiency, developers avoid factorial-based solutions and use iterative logic with loops.
As a Junior Software Developer, design a C++ program to generate Pascal’s Triangle for a given number of
rows.*/
#include<iostream>
int main()
{
    int num;
    std::cout<<"\nEnter the number of rows:";
    std::cin>>num;
    int i,j,k;
    for(i=0;i<num;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(j==0 || j==i)
            {
                std::cout<<1;
            }
            else 
            {
               int fac_1=1;
                for(k=1;k<=i;k++)
                fac_1*=k;
                int fac_2=1;
                for(k=1;k<=j;k++)
                fac_2*=k;
                int fac_3=1;
                for(k=1;k<=i-j;k++)
                fac_3*=k;
                int val=fac_1/(fac_3*fac_2);
                std::cout<<val;
            }
        }
        std::cout<<std::endl;
    }
    return 0;
}
