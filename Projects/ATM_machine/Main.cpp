#include<iostream>
using namespace std;
int main ()
{
    int choice;
double balance=10000,amount;
do {
    cout<<"\n======================\n";
    cout<<"    ATM MACHINE\n";
    cout<<"======================\n";
    cout<<"\n1.Check Balance";
    cout<<"\n2.Deposit Money";
    cout<<"\n3.Withdraw Money";
    cout<<"\n4.Exit";
    cout<<"\n======================\n";
    cout<<"\n Enter your choice";
    cin>>choice;
    switch (choice)
    {
        case 1:
        cout<<"\nBalance in account\n"<<balance;
        break;
        case 2:
        cout<<"\nEnter deposit amount";
        cin>>amount;
        if (amount>0){
        balance=balance+amount;
        cout<<"\nDeposit Successful";}
        else {
        cout<<"Invalid amount";
        }
        break;
        case 3:
        cout<<"\nWithdraw amount from account";\
        cin>>amount;
        if (amount > 0&& amount<=balance){
        balance=balance-amount;
        cout<<"\nWithdraw is successful:";
        }else {
        cout<<"Invalid withdraw";}
        break;
        case 4:
        cout<<"\nThank you for using ATM:";
        break;
        default:
        cout<<"Invalid choice:";
        break;
    }
}while (choice!=4);
return 0;
}
