#include<iostream>
using namespace std;
int main()
{
int num1,num2;
cout<<"Enter first number:"<<endl;
cin>>num1;
cout<<"Enter second number:"<<endl;
cin>>num2;
if(num1>num2)
cout<<"The first number is higher :"<<endl;
if(num2>num1)
cout<<"The second number is higher :"<<endl;
else 
cout<<"Both are equal:"<<endl;
return 0;
}
