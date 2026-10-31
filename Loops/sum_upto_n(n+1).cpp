#include<iostream>
using namespace std;
int main ()
{
  int i,n,sum;
cout<<"Give the value of n:"<<endl;
cin>>n;
sum=0;
for(i=1;i<n;i++)
{
sum=sum+i+(i+1);
}
cout<<"Result="<<endl;
return 0;
}
