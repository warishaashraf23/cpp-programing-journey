#include <iostream>

using namespace std;

int main()
{
    int m;//calculate month days 
cin>>m;
if ((m==3)||(m==5)||(m==7)||(m==9)||(m==11))
cout<<"Given month has 30 days";
else if ((m==1)||(m==4)||(m==8)||(m==10)||(m==12))
cout<<"Given month has 31 days ";
else if (m==2)
{
    int y;//y use to show year  
    cin>>y;
    if( ((y%4==0)||(y%400==0))&&(y%100!=0))
    cout<<" Given month has 29 days "<<endl;
    else 
     cout<<"Given month has 28 days";
}
else cout<<"Invalid month number"<<endl;
return 0;
}
