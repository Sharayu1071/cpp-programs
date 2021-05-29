#include<iostream>
using namespace std;
class Employee
{
private:
    int eno;
    char name[30];
    char gen;
    float sal;
    char city[10];
public:
    void getData()
    {
        cout<<"\n Enter employe  no ";
        cin>>eno;
        cout<<"\n Enter name ";
        cin>>name;
        cout<<"\n Enter gender(M/F)";
        cin>>gen;
        cout<<"\n Enter salary ";
        cin>>sal;
        cout<<"\n Enter city ";
        cin>>city;
    }
        void putData()
        {
            cout<<"\n"<<eno<<"\t"<<name<<"\t"<<gen<<"\t"<<sal<<"\t"<<city;
        }
        int geteno()
        {
            return eno;
        }

};
int main()
{
    Employee e[10];
    int i,tempa;
    for(i=0;i<10;i++)
    {
        e[i].getData();
    }


     cout<<"\n Enter empolyee no for info ";
     cin>>tempa;
     for(i=0;i<10;i++)
     {
         if(e[i].geteno()==tempa)
         {
         cout<<"\n Eno\tEname\tGender\tSalary\tCity ";
             e[i].putData();

         }
     }




    return 0;
}
