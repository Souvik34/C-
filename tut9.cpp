#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "tell me your age" << endl;
    cin >> age;

    // ****************Selection Control structure: If-else if ladder******************
    if (age < 18)
    {
        cout << "You cannot come to the party" << endl;
    }
    else if (age == 18)
    {
        cout << "You cannot come to the party" << endl;
    }
    else if (age<1)
    {
        cout<<"You are not yet born"<<endl;
    }
    
    else
    {
        cout << "You can come to the party";
    }

//****************Selection Control structure: Switch case******************

switch (age)
{
case 18:
    cout<<"you are 18\n";
    break;

case 22:
    cout<<"you are 22\n";
    break;

case 2:
    cout<<"you are 2\n";
    break;

default:
cout<<"No special cases\n";
    break;
}
cout<<"Done with the switch case";
    return 0;
}