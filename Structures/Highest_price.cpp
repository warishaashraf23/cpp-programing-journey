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
book b[10];int i;
int high;
cout<<"Give data of the book:"<<endl;
for (i=0;i<10;i++)
{
cin>>b[i].bid>>b[i].title>>b[i].price;
}
high=b[0].price;
for (i=0;i<10;i++)
{
if (a[i].price>high)
{
high=a[i].price;
}
cout<<"Data of the book having highest price:"<<endl;
cout<<"BID of book:"<<s[i].bid<<endl;
cout<<"TITLE of book:"<<s[i].title<<endl;
cout<<"PRICE of book:"<<s[i].price<<endl;
return 0;
}
