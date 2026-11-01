#include<iostream>
using namespace std;
struct book
{
int bid;
char title[30];
int price;
};
int main ()
{
book*b;
b=new book [10];int i;
int high;
cout<<"Give data of the book:"<<endl;
for (i=0;i<10;i++)
{
  //pointer notation
cin>>(b+i)->bid>>(b+i)->title>>(b+i)->price;
}
high=(b+i)->price;
for (i=0;i<10;i++)
{
if ((b+i)->price>high)
{
high=(b+i)->price;
}
cout<<"Data of the book having highest price:"<<endl;
cout<<"BID of book:"<<(b+i)->bid<<endl;
cout<<"TITLE of book:"<<(b+i)->title<<endl;
cout<<"PRICE of book:"<<(b+i)->price<<endl;
return 0;
}
