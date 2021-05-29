#include<iostream>
using namespace std;
class student
{
private:
    int rno;
    char name[30];
    int total;
    float avg;

public:
    void getData()
    {
    cout<<"\n Enter roll number: ";
    cin>>rno;

    }
    void putData()
    {
     cout<<"\n"<<rno<<"\t"<<name<<"\t"<<total<<"\t"<<avg;

    }

};
int main()
{
    student s1,s2,s3;
    s1.getData();
    s2.getData();
    s3.getData();
  cout<<"\nRoll_NO\tName\tTotal\tAverage";
    s1.putData();
    s2.putData();
    s3.putData();

    return 0;
}

