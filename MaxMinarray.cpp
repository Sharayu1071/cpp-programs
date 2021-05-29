#include<iostream>
using namespace std;
class MaxMin
{
private:
    int arr[10];
public:
    void read();
    void max();
    void min();
};
void MaxMin::read()
{
    cout<<"\n Enter 10 integers ";
    int i;
    for(i=0;i<10;i++)
    {
        cin>>arr[i];
    }
}

void MaxMin::max()
{

    int i;

    for(i=0;i<10;++i )
    {
       if(  arr[0] < arr[i] )
       {
        arr[0] = arr[i];
       }

       cout<<"\n max no is " << arr[0];
    }
}

int main()
{
MaxMin a1;
a1.read();
a1.max();
return 0;
}
