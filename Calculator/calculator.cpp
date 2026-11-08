#include <iostream>
using namespace std;
int main(){
double a,b;
cin>>a>>b;//variable declaration
char op;
cin>>op;//operator declaration
switch (op)
{
   case'+':cout<<"Result"<<"   "<<a+b<<endl;
   break;
   case'-':cout<<"Result"<<"   "<<a-b<<endl;
    break;
   case'*':cout<<"Result"<<"   "<<a/b<<endl;
    break;
   case'/':
   if (b!=0)
   cout<<"Result"<<"   "<<a/b<<endl;
    else 
    cout<<"Cannot divide by zero"<<endl;
    default: 
    cout<<"Invalid operator"<<endl;
}
return 0;
    
}
