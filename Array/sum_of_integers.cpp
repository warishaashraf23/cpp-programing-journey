#include<iostream>
using namespace std;
int main()
{
int a [10];
int i;int sum=0;
cout<<"Give the value of arrays:"<<endl;
for(i=0;i<10;i++)
{
cin>>a[i];
}

for(i=0;i<10;i++)
{
sum=sum+a[i];
}
  cout<<"The array values sum is:"<<sum<<endl;
return 0;
}


