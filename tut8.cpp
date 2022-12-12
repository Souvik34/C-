#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    // Constants in C++

    // const int a= 4;
    // cout<<"The value of a was" <<a<<endl;

    // a= 44;  You will get an error bcz its a constant

   // cout<<"the value of a is" << a;

int a=3, b=78, c=86679;
cout<<"The value of A without setw is"<<a<<endl;
cout<<"The value of b without setw is"<<b<<endl;
cout<<"The value of c without setw is"<<c<<endl;

cout<<"The value of A is"<<setw(4)<<a<<endl; // setw is used to set space before the no. or ratherto set right alignment
cout<<"The value of b is"<<setw(4)<<b<<endl;
cout<<"The value of c is"<<setw(4)<<c<<endl;

// ***************** Operator Precedence *****************
int x=6, y=5;
int t= x*y+5;
cout<<t<<endl;

    return 0;
}