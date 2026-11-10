#include <iostream>
using namespace std;
int digits  (int n)
{
if (n<10)
return 1;
return 1+digits(n/10);// n/10 remove last digit 
}
int digitsum (int n)
{
if (n==0)
return 0;
return n%10+digitsum(n/10);// n%10 gets last digit
}
int power (int b,int e){
    if (e==0)
    return 1;
    return b*power(b,e-1);
}

int main()
{
int n=58345;
cout<<"The number of digits are given as:\n"<<digits(n)<<endl;
cout<<"\nThe sum of digits given as:\n"<<digitsum (n)<<endl;
cout<<"\nThe power of digit is given as:\n"<<power(5,2)<<endl;
   return 0;
}
