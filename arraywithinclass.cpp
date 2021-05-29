#include<iostream>
using namespace std;
class Array
{
private:
    int a[10];
public:
    void read();
    void print();

};
void Array::read()
  {
  cout<<"\n Enter 10 integers";
int i;
for(i=0;i<10;i++)
{
    cin>>a[i];
}
}
void Array::print()
{   int i;
    for(i=0;i<10;i++)
    {
        cout<<a[i];
    }
}
int main()
{
Array obj;
obj.read();
obj.print();
return 0;
}
