#include<iostream>
using namespace std;
int main()
{
    int year;//calculating leap year
    
    cin>>year;
    if(year%400==0)
    cout<<"LEAP YEAR"<<endl;
   else if(year%100==0)
    cout<<"NOT LEAP YEAR"<<endl;
    else if(year%4==0)
    cout<<"LEAP YEAR"<<endl;
    else
    cout<<" NOT LEAP YEAR"<<endl;
}
