#include<iostream>
using namespace std;
int main ()
{
  int a[10];
int i,high,loc;
cout<<"Give array values:"<<endl;
for(i=0;i<10;i++)
{
cin>>a[i];
}
high=a[0];
loc=0;
for(i=0;i<10;i++)
{
if (a[i]>high)
  high=a[i];
loc=a[i];
}
cout<<"Highest value is :"<<high<<endl;
return 0;
}

