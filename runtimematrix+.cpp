#include<iostream>
using namespace std;
class Matrix
{
private:
    int **a,r,c;
public:
    Matrix()
    {
         int i,j;
        a=new int*[3];
         for(int i=0;i<3;i++)
            a[i]=new int[3];


        cout<<"\n Enter 3x3 Matrix";
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cin>>a[i][j];
            }
        }
    }

     Matrix(Matrix &x)
    {
         int i,j;
        a=new int*[3];
         for(i=0;i<3;i++)
            a[i]=new int[3];


        cout<<"\n Enter 3x3 Matrix";
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                a[i][j]=x.a[i][j];
            }
        }
    }


    void print()
    {
        int i,j;
        for(i=0;i<3;i++)
        {
            cout<<"\n";
            for(j=0;j<3;j++)
            {
                cout<<a[i][j]<<"\t";
            }
        }
    }

    ~Matrix()
    {
        int i;
        for(i=0;i<r;i++)
            delete []a[i];
            delete []a;

    }
friend void add(Matrix,Matrix);
};
int main()
{
    Matrix obj1;
    Matrix obj2(obj1);


    cout<<"\nMatrix 1  and 2is:";
    obj1.print();

    cout<<"\n Matrix addition is:";
    add(obj1,obj2);


}
 void add (Matrix m1,Matrix m2)
    {

        int i,j;
        for(i=0;i<3;i++)
        {   cout<<"\n";
            for(j=0;j<3;j++)
            {
                cout<<m1.a[i][j]+m2.a[i][j]<<"\t ";
            }
        }


    }
