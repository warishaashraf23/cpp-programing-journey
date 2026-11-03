#include <iostream>

using namespace std;

int main()
{
   string s;//string decleration
   cin>>s;
   if (s.length()>=8)//string length decleration
   {  
    if (s.find_first_of("0123456789")!=string::npos)//npos shows no position of digit found
    cout<<" The given value matches the criteria";
    else 
    cout<<"Add digits in the value";
   }
   else cout<<"Add at least 8 characters ";
   return 0;
}
