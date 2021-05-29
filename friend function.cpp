#include<iostream>
using namespace std;
class Test;
class Sample
{
    int x;
public:
    void readx()
    {
        cout<<"\n Enter value of x ";
        cin>>x;
    }
    friend void max(Sample,Test);
};


class Test
{
int y;
public:

void ready()
    {
      cout<<"\n Enter value of y ";
      cin>>y;
    }
    friend void max(Sample,Test);
};
int main()
{
    Sample s;
    Test t;

    s.readx();
    t.ready();

    max(s,t);
    return 0;
}

void max(Sample a,Test b)
{
    if(a.x>b.y)
        cout<<"\n maximum "<<a.x;
    else
        cout<<"\n maximum "<<b.y;
}

