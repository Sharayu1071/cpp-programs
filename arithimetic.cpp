#include<iostream>
using namespace std;
class Arithmetic
{
private:
    int a,b;
public:
    void read()
    {
        cout<<"\n Enter values of a & b  ";
        cin>>a>>b;
    }
    void add()
    {
        cout<<"\n addition= "<<a+b;
    }
    void sub()
    {
        cout<<"\n sub= "<<a-b;
    }
    void mul()
    {
        cout<<"\n multiplication= "<<a*b;
    }
    void div()
    {
        cout<<"\n div= "<<float(a)/b;
    }
    void operate()
    {
      add();
      sub();
      mul();
      div();
    }
};
int main()
{
    Arithmetic obj;
    obj.read();
    obj.operate();
    return 0;
}
