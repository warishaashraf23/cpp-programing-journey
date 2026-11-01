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
product p[10];int i;
int low;
cout<<"Give data of the product:"<<endl;
for (i=0;i<10;i++)
{
cin>>p[i].pid>>p[i].pname>>p[i].quality;
}
low=p[0].quality;
for (i=0;i<10;i++)
{
if (a[i].quality<low)
{
low=a[i].quality;
}
cout<<"Data of the product having lowest quality:"<<endl;
cout<<"PID of product:"<<s[i].pid<<endl;
cout<<"PNAME of product:"<<s[i].pname<<endl;
cout<<"QUALITY of product:"<<s[i].quality<<endl;
return 0;
}
