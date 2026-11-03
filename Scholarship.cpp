#include <iostream>

using namespace std;

int main()
{
    int marks,attendence;
cin>>marks>>attendence;
if (marks>=75)
{
    if (attendence>=80)
    cout<<"Receive Fully Funded Scholorship"<<endl;
    else cout<<"Attendence not meet the scholarship criteria"<<endl;
}
else cout<<"Marks below criteria of scholorship"<<endl;
return 0;
}
