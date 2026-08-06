#include<iostream>   
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    cout<<"================================\n    ✂️ ROCK PAPER SISCOR GAME\n================================\n";
    int compchoice = rand() % 3 + 1;
    int a;
cout<<"\n1. Rock\n2. Paper\n3. Scissors\n"<<endl;
cout<<"Enter your choice: ";
cin>>a;

if(compchoice==1){
cout<<"Computer choice is: "<<compchoice<<endl;}


else if (compchoice==2){
cout<<"Computer choice is: "<<compchoice<<"\n"<<endl;}
else if (compchoice==3){
cout<<"Computer choice is: "<<compchoice<<"\n"<<endl;}
if(a==compchoice){
    cout<<"Draw! 🤝\n"<<endl;
}
else if (a==1 && compchoice==3 || a==2 && compchoice==1 || a==3 && compchoice==2){
    cout<<"You Win! 🎉"<<endl;
}
else {
    cout<<"You Lose! 😢"<<endl;
    while(true){
        cout<<"Do you want to play again? (y/n): ";
        char choice;
        cin>>choice;
        if(choice=='y' || choice=='Y'){
            main();
            break;
        }
        else if(choice=='n' || choice=='N'){
            cout<<"Thank you for playing! 👋\n"<<endl;
            break;
        }
        else{
            cout<<"Invalid input! Please enter 'y' or 'n'.\n"<<endl;
        }
}
cout<<"=======================\n"<<endl;
}
        return 0;

}