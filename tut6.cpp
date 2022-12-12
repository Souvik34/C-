// There are two types of header files
// 1. System header files: It comes with compiler
#include<iostream>
// 2. User defined header files: It is written by the programmer
using namespace std;

int main()
{
    int a=4, b=5;
    cout<<"Operators in C++\n";
    // Arithmetic operators
    cout<<"The value of a+b is " <<a+b<<endl;
    cout<<"The value of a-b is " <<a-b<<endl;
    cout<<"The value of a*b is " <<a*b<<endl;
    cout<<"The value of a/b is " <<a/b<<endl;
    cout<<"The value of a%b is " <<a%b<<endl;
    cout<<"The value of a-- is " <<a--<<endl;
    cout<<"The value of a++ is " <<a++<<endl;
    cout<<"The value of ++a is " <<++a<<endl;
    cout<<"The value of --a is " <<--a<<endl<<endl;

    // Assignment Operators --> used to assign values to variables
    // int a=3, b=9;
    // char d='d';
 


    // Comparison Operators
    cout<<"Following are the comparison operators"<<endl;
    cout<<" The value of a==b is" <<(a==b)<<endl;
    cout<<" The value of a>b is "<<(a>b)<<endl;
    cout<<" The value of a<b is" <<(a<b)<<endl;
    cout<<" The value of a<=b is "<<(a<=b)<<endl;
    cout<<" The value of a>=b is"<<(a>=b)<<endl;
    cout<<" The value of a!=b is"<<(a!=b)<<endl<<endl;


// Logical Operators
cout<<"Following are the logical operators"<<endl;
cout<<"The value of logical and operator ((a==b)&&(a<b)) is: "<<((a==b)&&(a<b))<< endl;
cout<<"The value of logical and operator ((a==b)||(a<b)) is: "<<((a==b)||(a<b))<< endl;
cout<<"The value of logical and operator (!(a==b)) is: "<<(!(a==b))<<endl;


    return 0;
}