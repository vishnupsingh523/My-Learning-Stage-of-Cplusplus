#include<iostream>
#include<stdlib.h>

using namespace std;

int select;

void atm_front_page(){
    system("cls");
    cout<<"1 Check Balance \t\t\t 2 Withdraw cash";
    cout<<"\n\n\n3 Deposit \t\t\t\t 4 Exit"<<endl<<endl;
    cout<<"Select any one....   ";
    cin>>select;
}
void Check_balance(){
        system("cls");

    cout<<"\t\t\t\t\t\t* Your Balance *";
}
void Withdraw_cash(){
        system("cls");

cout<<"\t\t\t\t\t\t* Withdraw Cash *";
}
void Deposit(){
        system("cls");
    cout<<"\t\t\t\t\t\t* Deposit*";
 }

int main()
{
    
    atm_front_page();
    switch (select)
    {
    case 1:Check_balance();
    break;
    case 2:Withdraw_cash();
    break;
    case 3:Deposit();
    break;
    case 4: cout<<endl<<"The Program is exiting......";
    exit(0);
    break;
    default: 
    cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\tError!!!!!!!!!!! WRONG CHOICE";
        break;
    }
    return 0;
}
