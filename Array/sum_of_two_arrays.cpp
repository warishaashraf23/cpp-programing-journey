#include<iostream>
using namespace std;
int main ()
{
  int a[10],b[10],c[10];
cout<<"Give value of array a,b:"<<endl;
for (int i=0;i<10;i++)
{
cin>>a[i]>>b[i];
}
for ( i=0;i<10;i++)
{
c[i]=a[i]+b[i];
}
for ( i=0;i<10;i++)
{
cout<<"The sum of two arrays is :"<<c[i]<<endl;
}
return 0;
}

