/*Create a class Person with data members name and age, and a function
displayPerson(). Derive a class Student that adds roll number and a function
displayStudent(). Show how a Student object can access both base and derived class
functions.*/


#include<iostream>
using namespace std;
class Person
{
   string name ;
   int age ;
   public:
   Person()
   {
    //person default constructer
    name="none";
    age =0;
   } 
   Person(string n,int a)
   {
    //cout<<"\nperson parametrized constructor\n";
    name =n;
    age=a;
   }
   void displayperson()
   {
    cout<<"\n name ;"<<name <<"\nage:"<<age;
   }
};
class Student:public Person{
    int rollno;
    public:
    Student()
    {
        //cout<<"\nstudent default constructer\n";
        rollno=0;
    }
    Student(string n, int a,int r):Person(n,a)
    {
        //cout<<"\nstudent parametrized constructor\n";
        rollno=r;
    }
    void displaystudent()
    {
        displayperson();
        cout<<"\nrollno:"<<rollno;
    }
};
int main()
{
    Student P1, P2("ishnika",19,91);
    cout<<"\nthe data from the base class:\n";
    P1.displayperson();
    P2.displayperson();
    cout<<"\n the data from the derived class:\n";
    P1.displaystudent();
    P2.displaystudent();
    return 0;
}
