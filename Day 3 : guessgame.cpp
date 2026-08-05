#include<iostream>   
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    cout<<"================================\n    🎯NUMBER GUESSING GAME\n================================\n";
    cout<<"I HAVE SELECTED NUMBERS BETWEEN 1 AND 100\n"<<endl;
    int i = 1;
    int secretnumber = rand() % 100 + 1;
    while(true){
        cout<<"Enter Your Guess "<<i<<": ";
        int guess1=0;
        cin>>guess1; 
       if (guess1<secretnumber){
            cout<<"TOO LOWWWW! 🔻 \n"<<endl;
        }
        else if (guess1>secretnumber){
            cout<<"TOO HIGHHHH! 🔺 \n"<<endl;
        }
        else {
            cout<<"YOUR CORRECT 🎉 \n"<<endl;
            break;
        }
        i++;
    }
    cout<<"TOTAL ATTEMPT :"<<i<<endl;
    cout << "Secret number: " << secretnumber <<endl;

    return 0;
}