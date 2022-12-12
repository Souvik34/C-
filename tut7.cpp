#include <iostream>
using namespace std;


int c=50000; // global value
int main()
{

    //****************Build in Data Types*******************
int a,b,c;
 cout<<"Enter the value of a"<<endl;
cin>>a;
cout<<"Enter the value of b"<<endl;
cin>>b;
c=a+b; // local value and it always deals with the local value only.
cout<<"the sum is: "<< c<<endl;
cout<<"the global value of c is: "<<:: c<<endl;// :: is a scope resolution  operator for global value


    //****************Literals*******************
float d=34.4f;
long double e= 34.4;

// size of ;

cout<<" The size of 34.4 is  s"<<sizeof(34.4)<<endl;
cout<<" The size of 34.4f is "<<sizeof(34.4f)<<endl;
cout<<" The size of 34.4F is "<<sizeof(34.4F)<<endl;
cout<<" The size of 34.4l is "<<sizeof(34.4l)<<endl;
cout<<" The size of 34.4L is "<<sizeof(34.4L)<<endl;
cout<<"The value of d is"<<d<<endl<< "the value of e is"<<e<<endl;


    //****************Reference Variables*******************
// // Rohan Das----> Monty ----> Rohu ------> Dangerous coder
float var1= 455;
float & var2= var1;
cout<<var1<<endl;
cout<<var2<<endl;

// ***************Type Casting****************

float r= 34.56;
cout<< "The value of r is: "<<(int)r<< endl; 

    return 0;
}