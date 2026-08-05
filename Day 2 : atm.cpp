#include <iostream>
using namespace std;
int main(){
    cout<<"=======================\n   ANEEK BANK ATM   \n=======================\n";
    cout<<"1. CHECK BALANCE \n";
    cout<<"2. DEPOSIT MONEY \n";
    cout<<"3. WITHDRAW MONEY \n";
    cout<<"4. EXIT \n";
    cout<<"=======================\n";
    int choice;
    cout<<"Enter your choice: ";
    cin>>choice;
    switch(choice){
        case 1:
        cout<<"Your balance is: ₹31000\n";
            break;
        case 2:
            cout<<"DEPOSIT MONEY SELECTED \n ";
           break;
        case 3:
            cout<<"Enter amount to withdraw: ";
            break;
        case 4:
            cout<<"Thank you for using ANEEK BANK ATM. Goodbye!\n";
            break;
        default:
            cout<<"Invalid choice. Please try again.\n";
            break;
       }
       if (choice == 2){
           int deposit;
           cout<<"Enter amount to deposit: ";
           cin>>deposit;
           cout<<"You have deposited: ₹"<<deposit<<"\n";
       }
       else if (choice == 3){
           int withdraw ;
           int balance = 31000;
           cin>>withdraw;
           if(withdraw < balance){
               cout<<"you have withdrawn: ₹"<<withdraw<<"\n";
           }
           else {
               cout<<"Insufficient balance. Your balance is: ₹"<<balance<<"\n";
           }
       }
       else if (choice == 1){
           cout<<"Your balance is: ₹31000\n";
       }
       else{
           cout<<"Thank you for using ANEEK BANK ATM. Goodbye!\n";
       }
    return 0;
}
