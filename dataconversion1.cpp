#include<iostream>
using namespace std;
class Time
{
    int hr,min;
public:
    Time(){}
    Time (int a)
    {
        hr=a/60;
        min=a%60;
    }
    void display()
    {
        cout<<"\n"<<hr<<":"<<min;
    }
};
int main()
{
    Time t;
    int x=200;

    t=x;

    t.display();
    return 0;
}
