#include<iostream>
using namespace std;
class Matrix
{
private:
    int **a;
public:
    Matrix()
    {
         int i;
        a=new int*[3];
         for(int i=0;i<3;i++)
            a[i]=new int[3];

    }

    void read()
    { int i,j;
      cout<<"\n Enter  Matrix = ";
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cin>>a[i][j];
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
        for(i=0;i<3;i++)
            delete []a[i];
            delete []a;

    }
friend Matrix mul(Matrix,Matrix);
};
int main()
{
    Matrix obj1;
    Matrix obj2;
    Matrix obj3;


    obj1.read();
    obj2.read();

     obj3=mul(obj1,obj2);


    cout<<"\nMatrix 1 is:\n\n";
    obj1.print();
    cout<<"\nMatrix 2 is:\n\n";
    obj2.print();

    cout<<"\n Matrix multiplication is:\n\n\t";
    obj3.print();

    return 0;

}
 Matrix mul(Matrix x,Matrix y)
    {
        Matrix t;
        int i,j,k;
        for(i=0;i<3;i++)
        {   cout<<"\n";
            for(j=0;j<3;j++)
            {
                t.a[i][j]=0;
                for(k=0;k<3;k++)
                    t.a[i][j]= t.a[i][j]+ x.a[i][k] * y.a[k][j];

            }

        }
        return t;
        }
