#include<iostream>
using namespace std;

int main()
{
// ****************************Array Example**********************
int marks[4] = {23, 45, 56, 89};
int Mathmarks[4];
Mathmarks[0]= 89;
Mathmarks[1]= 99;
Mathmarks[2]= 87;
Mathmarks[3]= 67;

cout<<"These are math marks"<<endl;
cout<<Mathmarks[0]<<endl;
cout<<Mathmarks[1]<<endl;
cout<<Mathmarks[2]<<endl;
cout<<Mathmarks[3]<<endl;

cout<<"These are normal marks"<<endl;
// cout<<marks[0]<<endl;
// cout<<marks[1]<<endl;
// cout<<marks[2]<<endl;
// cout<<marks[3]<<endl;

// ***********************For loop array ex.**************************

for (int i = 0; i < 4; i++)
{
    cout<<"The value of marks is: "<<marks[i]<<endl;
}


// ***********************While loop array ex.**************************
int i=0;
while (i<4)     
{
    cout<<"The value of marks is: "<<marks[i]<<endl;
    i++;
}


// ***********************do while loop array ex.**************************

do
{
    cout<<"The value of marks is: "<<marks[i]<<endl;
    i++;
} while (i<4);


//**************************Pointers and Arrays******************************

int* p= marks;
cout<<"The value of marks "<<*p<<endl;
cout<<"The value of marks "<<*(p+1)<<endl;
cout<<"The value of marks "<<*(p+2)<<endl;
cout<<"The value of marks "<<*(p+3)<<endl;

return 0;
}