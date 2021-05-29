#include<iostream>

using namespace std;
class Date

{
private:
    int day,month,year;



public:
    void read();
    void dmy();
    void mdy();
     void dmony();
};


    void Date::read()
    {
        cout<<"\n Enter day,month,year ";
        cin>>day>>month>>year;

    }
    void Date::dmy()
    {
        cout<<"\n dd/mm/yy="<<day<<"/"<<month<<"/"<<year;
    }

    void Date::mdy()
    {
        cout<<"\n mm/dd/yy="<<month<<"/"<<day<<"/"<<year;
    }






    void Date::dmony()
    {

          if (month==1) cout<<"\n dd-m-yy="<<day<<"-"<<"jan"<<"-"<<year;
         else if (month==2) cout<<"\n dd-m-yy="<<day<<"-"<<"feb"<<"-"<<year;
         else if (month==3) cout<<"\n dd-m-yy="<<day<<"-"<<"mar"<<"-"<<year;
         else if (month==4) cout<<"\n dd-m-yy="<<day<<"-"<<"apr"<<"-"<<year;
         else if (month==5) cout<<"\n dd-m-yy="<<day<<"-"<<"may"<<"-"<<year;
         else if (month==6) cout<<"\n dd-m-yy="<<day<<"-"<<"jun"<<"-"<<year;
         else if (month==7) cout<<"\n dd-m-yy="<<day<<"-"<<"jul"<<"-"<<year;
         else if (month==8) cout<<"\n dd-m-yy="<<day<<"-"<<"aug"<<"-"<<year;
         else if (month==9) cout<<"\n dd-m-yy="<<day<<"-"<<"sep"<<"-"<<year;
         else if (month==10) cout<<"\n dd-m-yy="<<day<<"-"<<"oct"<<"-"<<year;
         else if (month==11) cout<<"\n dd-m-yy="<<day<<"-"<<"nov"<<"-"<<year;
         else if (month==12) cout<<"\n dd-m-yy="<<day<<"-"<<"dec"<<"-"<<year;


    }



int main()
{

    Date obj;
    obj.read();



      obj.dmy();
      obj.mdy();
      obj.dmony();

}
