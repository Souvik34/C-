#include <iostream>
#include<vector>
using namespace std;
int main()
{

vector<int> v;
v.push_back(1);
v.push_back(4);
v.push_back(7);

for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<endl;
}// 1 4 7

vector<int>::iterator it;
for(it=v.begin();it!=v.end();it++)
{
    cout<<*it<<endl;
}

for (auto element:v)
{
    cout<<element<<endl;
}


return 0;
}