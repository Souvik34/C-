#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return n*factorial(n-1);
}
int main()
{
    //Factorial of a number:
    //4!=1*2*3*4= 24
    //n!=n*(n-1)!
int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
cout<<"The factorial of" <<a<< "is: "<<factorial(a)<<endl;
return 0;
}