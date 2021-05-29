#include<iostream>
using namespace std;
class Student
{
protected:
    int rno;
    char name[30];
public:
    void setRno(int a)
    {
      rno=a;
    }
    void setName(char s[])
    {
        strcpy(name,s);
    }
};
class Test:public Student
{
protected:
    int score1,score2;
public:
    void setScore(int a,int b)
    {
        score1=a;
        score2=b;
    }
};
class Result:public Student
{
    int total;
    float avg;
public:
    void calculate()
    {
        total=score1+score2;
        avg=total/2.0;
    }
    void putInfo()
    {
        cout<<"\n Roll no    ="<<rno;
        cout<<"\n Name       ="
    }

};
