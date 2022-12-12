#include <iostream>
using namespace std;
int main()
{


int t;
cin>>t;
while(t--)
{
    int x,n,r=1;
    cin>>x>>n;
    for(int i=1;i<=n;i++)
    {
         r= r*2;
    }
    int s= x*r;
    cout<<s<<endl;
    

}
return 0;
}