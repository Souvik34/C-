// ********************Bit Manipulation (Basics)************

#include<iostream>
using namespace std;

int main()
{
   int n;// number
   cin>>n;

// *************check even and odd************

//    if(n&1 !=0)
//    {
//        cout<<"Odd Number"<<endl;
//    } 
//    else
//    {
//        cout<<"even Number"<<endl;
//    }
//**********************Get Bit********************
// int i;  // position
// cin>>i;

// int a= ((n&(1<<i))!=0);
// cout<<a<<endl;

//**********************Set Bit*********************

int i; // position
cin>>i;
// int a= (n|(1<<i));
// cout<<a<<endl;
// ************************Clear Bit******************
// int a= ~(1<<i); //negation; Bit masking
// int b= (n&a);
// cout<<b<<endl;

//**************************Update Bit*****************
int s;// update Bit
cin>>s;
int a= ~(1<<i);
 n= n&a;
int b= (n|(s<<i));
cout<<b<<endl;
return 0;
}