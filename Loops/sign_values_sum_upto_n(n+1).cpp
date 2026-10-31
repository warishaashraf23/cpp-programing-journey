#include<iostream>
using namespace std;
int main()
{
  int i,n,sum,sign;
cout<<:Give value of n:"<<endl;
  cin>>n;
sum=0;
sign=-1;
for(i=1;i<=n;i++)
{
sum=sum+i+(i+1)*sign;
sign=sign*(-1);
}
cout<<"Result="<<sum<<endl;
return 0;
}
