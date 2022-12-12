#include <iostream>
using namespace std;

int main()
{

   cout << "Enter the amount to be withdrawn\n";
   cout << "Enter your intial balance\n";
   int x;
   double t;
   double y;
   cin >> x;
   cin >> y;
   if ((x % 5 == 0) && (0 < x <= 2000))
   {

      if (0 <= y <= 2000)     
      {
         t = y - x - 0.50;

         cout << "Your cash is\n";
         cout << t;
      }
   }
   else if (x > y)

   {
      cout << y;
   }

   return 0;
}
