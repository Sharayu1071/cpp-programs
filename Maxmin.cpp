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
        if(x>y)
        {
            if(x>z)
                {cout<<"\n maximum= "<<x;}
            else
               {cout<<"\n Maximum= "<<z;}
        }
        else
            {
                if(y>z
                   {
                    cout<<"\n maximum= "<<y;
                   }
                 else
                   {
                    cout<<"\n maximum= "<<z;
                   }
             }

};
int main()
{

MaxMin obj;

obj.read();
obj.Max();
obj.Min();
return 0;
}

