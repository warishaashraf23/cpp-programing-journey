#include <iostream>

using namespace std;

int main()
{
    char ch;
    //char used to indicate character values
    cin>>ch;
    
    if (ch>='A'&&ch<='Z')
    cout<<" UPPERCASE CHARACTERS"<<endl;
   else if (ch>='a'&&ch<='z')
    cout<<"LOWERCASE CHARACTERS  "<<endl;
    else if  (ch>='0'&&ch<='9')
    cout<<"NUMERIC VALUES"<<endl;
    else 
    cout<<"SPECIAL CHARACTERS"<<endl;
    return 0;
}
