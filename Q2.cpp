
#include<iostream>
#include<vector>
using namespace std;

int main()
{
int n=0,in=0,a=0;
vector<vector<int> >vec;
cout<<"Enter Number of Rows:  ";
cin>>n;
for(int i=0;i<n;i++)
{
vector <int> t;
cout<<"Enter Row Size:     ";
cin>>in;
for(int j=0;j<in;j++)
{
cout<<"Enter row Elements: ";
cin>>a;
t.push_back(a);
}
vec.push_back(t);
}
for(int i=0;i<n;i++)
{
// vector <int> t;
// cout<<"Enter Row Size:     ";
// cin>>in;
for(int j=0;j<vec[i].size();j++)
{
cout<<vec[i][j]<<"  ";
}
cout<<endl;

}
return 0;
}
