#include<iostream>
using namespace std;
class employee
{
private:
    int empno;
    char name[30];
    char gen[20];
    int sal;

public:
    void getData()
    {
    cout<<"\n Enter Employee number: ";
    cin>>empno;
    cout<<"\n Enter name: ";
    cin>>name;
    cout<<"\n Enter Gender: ";
    cin>>gen;
    cout<<"\n Enter salary: ";
    cin>>sal;

    }
    void putData()
    {
     cout<<"\n"<<empno<<"\t"<<name<<"\t"<<gen<<"\t"<<sal;

    }

};
int main()
{
    employee e1,e2,e3;
    e1.getData();
    e2.getData();
    e3.getData();
  cout<<"\nEmployee_NO\tName\tGender\tSalary";
    e1.putData();
    e2.putData();
    e3.putData();

    return 0;
}

