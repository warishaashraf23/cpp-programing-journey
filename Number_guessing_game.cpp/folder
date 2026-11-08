#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main ()
{
srand (time(0));//intialize random number generator
int secret = rand ()%100+1;//generates in between 1 or 100
int guess;
cout<<"Guess a number between 1 and 100\n"<<endl;
do{
      cout<<"Enter your guess"<<endl;
      cin>>guess;
      if (guess>secret)
      cout<<"Too High\n"<<endl;
      else if (guess<secret)
      cout<<"Too Low\n"<<endl;
      else  
      cout<<" Congratulations !You Won\n"<<endl;
  } while (guess!=secret);
   return 0;
}
