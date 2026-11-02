#include <iostream>

using namespace std;

int main()
{
    int units;
cout<<"ENTER  THE UNITS "<<endl;
    cin>>units;
    
    if (units>=100)
    cout<<units*35<<endl;
   else if (units>=200)
    cout<<units*40<<endl;
    else 
    cout<<units*50+100<<endl;//where 100 is tax 
    
    return 0;
}
