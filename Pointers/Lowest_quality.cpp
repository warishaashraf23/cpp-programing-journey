#include<iostream>
using namespace std;
struct product
{
int pid;
char pname[30];
int quality;
};
int main ()
{
product*p;
p=new product [10];int i;
int low;
cout<<"Give data of the product:"<<endl;
for (i=0;i<10;i++)
{
  //pointer notation
cin>>(p+i)->pid>>(p+i)->pname>>(p+i)->quality;
}
low=(p+i)->quality;
for (i=0;i<10;i++)
{
if ((p+i)->quality<low)
{
low=(p+i)->quality;
}
cout<<"Data of the product having lowest quality:"<<endl;
cout<<"PID of product:"<<(p+i)->pid<<endl;
cout<<"PNAME of product:"<<(p+i)->pname<<endl;
cout<<"QUALITY of product:"<<(p+i)->quality<<endl;
return 0;
}
