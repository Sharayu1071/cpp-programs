#include <iostream>
#include <cstdio>
using namespace std;

const char *digits[] = {"one","two","three","four","five","six","seven","eight","nine"};

int main() {
    // Complete the code.
    int a;
    int b;
    cin >> a;
    cin >> b;
    while(b >= a ){
        if((a >= 1) && (a <= 9))
            cout << digits[a-1] << endl;
        else{
            if( (a % 2) == 0)
                cout << "even" << endl;
            else
                cout << "odd" << endl;
        }
        ++a;
    }
    return 0;
}
