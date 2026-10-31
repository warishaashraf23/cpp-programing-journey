#include<iostream>
using namespace std;
int main ()
{
  int a,b,c;
cout<<"Give value of a,b,c:"<<endl;
cin>>a>>b>>c;
if(a>b&&a>c)
  cout<<"a is highest:"<<endl;
else if (b>a&&b>c)
  cout<<"b is highest:"<<endl;
else
  cout<<"c is highest"<<endl;
return 0;
}
