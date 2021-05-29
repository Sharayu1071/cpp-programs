#include<iostream>
using namespace std;
class Test;
class Sample
{
    int x;
public:
    void readx()
    {
      cout<<"\n Enter value of x: ";
      cin>>x;
    }
    void printx()
    {
        cout<<"\n x= "<<x;
    }
    friend void swap(Sample &,Test &);
};
class Test
{
    int y;
public:
    void ready()
    {
      cout<<"\n Enter value of y: ";
      cin>>y;
    }
    void printy()
    {
        cout<<"\n y= "<<y;
    }
    friend void swap(Sample &,Test &);
};
int main()
{
    Sample s;
    Test t;

    s.readx();
    t.ready();

    cout<<"\n Before swapping";
    s.printx();
    t.printy();

     swap(s,t);
    cout<<"\n After swapping";
    s.printx();
    t.printy();
}

void swap(Sample &a,Test &b)
{
    int t;
    t=a.x;
    a.x=b.y;
    b.y=t;
}


