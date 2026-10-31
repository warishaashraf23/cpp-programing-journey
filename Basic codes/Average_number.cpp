include<iostream>
using namespace std;
int main()
{
float m1,m2,m3,average;
cout<<"Enter marks of three subjects:"<<endl;
cin>>m1>>m2>>m3;
average=(m1+m2+m3)/3;
if (average>=80)
cout<<"Grade A:"<<endl;
if (average>=70)
cout<<"Grade B:"<<endl;
if (average>=60)
cout<<"Grade C:"<<endl;
if (average>=50)
cout<<"Grade D:"<<endl;
else
cout<<"Grade F:"<<endl;
return 0;
}
