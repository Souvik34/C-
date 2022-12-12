#include <iostream>
using namespace std;

int main()
{
    /* Loops in C++:
There are three types of loops in C++
    1. For loop
    2. while loop
    3. Do while loop
*/
    //****************** For loop In C++ ***********************
    /*
for(initialization; condition; updation)
{
    loop body(C++ Code);
}
*/

        for (int i = 1; i <= 40; i++)
        {
            cout << i << endl;
        }

    // *********************** While loop in C++ ***********************

    // Syntax:
    // while (/* condition */)
    // {
    //     C++ Statements
    // }

    //  printing 10 to 40 using while loop
    int i = 1;
    while (i <= 40)
    {
        cout << i << endl;
        i++;
    }


// *********************Do while loop in C++*****************
/* Syntax
do
{
    C++ Statements;
    } while(conditions)
  
    */
   int i=1;
do

{
    cout<<i<<endl;
    i++;
} while (false);


    return 0;
}