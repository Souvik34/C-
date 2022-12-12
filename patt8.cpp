// *****************************Floyd's Triangle**********************

#include<iostream>
using namespace std;

int main()
{
  cout<<"Enter the number of the rows"<<endl;
  int row, c=0;
  cin>>row;

  for (int  i = 1; i <=row; i++)
  {
      for (int j = 1; j <=i; j++)
      {
          c++;
          cout<<c<<" ";
      }
      cout<<endl;
  }
    
return 0;
}