#include<iostream>
using namespace std;
class MaxMin
{
private:
    int x,y,z;
public:
    void read()
    {
    cout<<"\n Enter three integers: ";
    cin>>x>>y>>z;
    }
    void Max()
    {
        if(x>y && x>z)
         cout<<"\n maximum= "<<x;
        if(y>x && y>z)
         cout<<"\n maximum= "<<y;
            if(z>x && z>y)
         cout<<"\n maximum= "<<z;
    }
     void Min()
    {
        if(x<y && x<z)
         cout<<"\n maximum= "<<x;
        if(y<x && y<z)
         cout<<"\n maximum= "<<y;
            if(z<x && z<y)
         cout<<"\n maximum= "<<z;
    }

};
int main()
{
MaxMin obj;
obj.read();
obj.Max();
obj.Min();
      return 0;}

