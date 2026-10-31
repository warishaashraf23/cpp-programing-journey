#include<iostrem>
using namespace std;
int main ()
{
float a,b,c,result;
cout<<"Enter three numbers:"<<endl;
cin>>a>>b>>c;
if (a>0&&b>0&&c>0)
{
result=(-b+b*b-4*a*c)/2*a;
cout<<"RESULT="<<result<<endl;
}
else
{
cout<<"Invalid values:"<<endl;
}
return 0;
}
