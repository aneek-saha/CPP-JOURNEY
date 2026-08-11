#include <iostream>
using namespace std;

int main(){
    float unit=0;
    int s;
    float rs=0;
        cout<<"================================"<<endl;
        cout<<"        ELECTRICITY BILL"<<endl;
        cout<<"================================\n"<<endl;
        cout<<"Enter Units Consumed : ";
        cin>>unit;

        if (unit>0 || unit<100){
            s = 5;
            rs = s*unit;
            cout<<"THE ELECTRIC BILL : ₹"<<rs<<"\n"<<endl; 
        }
        else if (unit>101 || unit>200){
            s = 7;
            rs = s*unit;
            cout<<"THE ELECTRIC BILL : ₹"<<rs<<"\n"<<endl;
        }
        else{
            s=10;
            rs=s*unit;
            cout<<"THE ELECTRIC BILL : ₹"<<rs<<"\n"<<endl;
        }
       cout<<"==========================="<<endl;
        cout<<"        THANK YOU"<<endl;
        cout<<"===========================\n"<<endl;

    return 0;
}