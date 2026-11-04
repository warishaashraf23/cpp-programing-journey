#include <iostream>

using namespace std;

int main()
{
    char light;//display traffic light
    cin>>light;
    switch (light)
    {
        case 'R': case 'r':cout<<"Stop"<<endl;break;
          case 'Y': case 'y': cout<<"Ready to go "<<endl; break;
          case  'G' :case 'g' :cout<<"Go";break;
          default : cout<<"Invalid signal";


    }
    return 0;
}
