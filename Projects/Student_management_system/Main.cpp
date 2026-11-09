#include <iostream>
using namespace std;
struct Student
{
    int rollno;
    string name;
    float marks;
};
int main()
{ Student s[100];
    int choice;
    int count=0;
  do { 
cout<<"\n=======================================\n";
 cout<<"   STUDENT MANAGEMENT SYSTEM  \n";
cout<<"=======================================\n";
cout<<"\n1.Add student";
cout<<"\n2.Display students";
cout<<"\n3.Exist";
cout<<"\n=======================================\n";
 cout<<"\n.Enter your choice";
 cin>>choice;
 if (choice==1){
    cout<<"\n------------ADD STUDENT DETAILS--------";
 cout<<"\nEnter rollno:";
 cin>>s[count].rollno;
 cout<<"Enter name:";
 cin>>s[count].name;
 cout<<"Enter marks:";
 cin>>s[count].marks;
 count ++;
 cout<<"\nStudent data added succesfully:";
 }
  else if (choice==2){
 for (int i=0;i<count;i++){
    cout<<"\n============STUDENT RECORDS============\n";
 cout<<"\nrollno :"<<s[i].rollno;
 cout<<"\nname :"<<s[i].name;
 cout<<"\nmarks :"<<s[i].marks;
  }
  }
 } while (choice!=3);
return 0;
}



