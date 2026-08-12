#include <iostream>
using namespace std;                        
int main() {
    cout<<"================================"<<endl;
    cout<<"         EXPENSE TRACKER "<<endl;
    cout<<"================================"<<endl;
    float budget;
    float j;
    float t=0;
    cout<<"ENTER YOUR BUDGET : ₹";
    cin>>budget;
    cout<<endl;
        for(int i = 1; i <=5; i++){
                cout<<"Your Expenses "<<i<<" : ₹";
                cin>>j;
                t +=j;
        }
            cout<<endl;
            cout<<"-------------------------------"<<endl;
            cout<<"THE TOTAL EXPENSES : ₹"<<t<<endl;
            float remaining = budget-t;
                 if(budget<remaining){
                    cout<<"BALANCE REAMINING :"<<remaining<<endl;
                 }
                 else {
                    cout<<"BUDGET EXCEEDED : ₹ "<<remaining<<endl;
                 }
            cout<<"-------------------------------"<<endl;
    return 0;
}