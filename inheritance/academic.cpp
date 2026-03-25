/*Create two classes: Academic with marks, and Sports with score. Derive a class Result that displays both academic marks 
and sports score. Show how the derived class accesses members of both base classes.*/
#include<iostream>
using namespace std;
class Academics
{
    int marks;
    public:
    Academics()
    {
        marks=0;
    }
    Academics(int i)
    {
        marks=i;
    }
    void DisplayMarks()
    {
        cout<<"\nthe marks are:"<<marks;
    }
};
class Sports
{
    int score;
    public:
    Sports()
    {
        score=0;
    }
    Sports(int j)
    {
        score=j;
    }
    void DisplayScore()
    {
        cout<<"\nthe score is:"<<score;
    }
};
class Result:public Academics, public Sports
{
    public:
    Result()
    {}
    Result(int m ,int s):Academics(m),Sports(s){}
    void DisplayResult()
    {
        DisplayMarks();
        DisplayScore();
    }
};
int main()
{
    Result R1,R2(100,30);
    cout<<"\nusing default constructor\n";
    R1.DisplayResult();
    cout<<"\nusing parametrised constructor\n";
    R2.DisplayResult();
    return 0;
}
