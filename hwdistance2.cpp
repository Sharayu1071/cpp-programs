#include<iostream>
using namespace std;
class Distance
{
    int km,mtr;
public:
    void read()
    {
        cout<<"\n Enter km and mtr:";
        cin>>km>>mtr;

    }
    void display()
    {
        cout<<"\n"<<km<<":"<<mtr;
    }

    Distance add(Distance a)
    {
        Distance t;


        t.mtr=mtr+a.mtr;
        t.km=km+a.km+t.mtr/1000;
        t.mtr=t.mtr%1000;

        return t;

    }
};
int main()
{
    Distance d1,d2,d3;

    d1.read();
    d2.read();

    d3=d1.add(d2);

     d1.display();
     d2.display();
     cout<<"\n Addition ";
     d3.display();
     return 0;

}
