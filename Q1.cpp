/*A teacher wants to calculate the average marks of three students to determine the class performance. Implement a solution 
to accept three numbers and compute their average.*/
#include<iostream>
int main()
{
int a,b,c;
std::cout<<"\nenter the marks:\n";
std::cin>>a>>b>>c;
std::cout<<"\nmarks of the 1st student="<<a<<std::endl<<"marks of the 2nd student="<<b<<std::endl<<"marks of the 3rd student=" 
<<c;
float avg=float(a+b+c)/3;
std::cout<<"\n the average of the marks="<<avg;
return 0; 
}
