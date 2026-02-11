/*write a function to calculate the EMI*/
#include<iostream>
#include<cmath>
double calculateEMI(double P, double R = 0.01, int T = 12);
int main()
{
    int p;
    std::cout<<"\nEnter the principal amount:";
    std::cin>>p;
    int result=calculateEMI(p);
    std::cout<<"\nThe emi is:"<<result;
    return 0;
}
double calculateEMI(double P, double R, int T)
{   int n;
    std::cout<<"\nEnter the number of years:";
    std::cin>>n;
    double emi=(P*R*pow(1+R,n))/(pow(1+R,n)-1);
    return emi;
}
