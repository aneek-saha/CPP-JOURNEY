#include <iostream>
using namespace std;
int main(){
    cout<<"==================================\n   STUDENT RESULT SYSTEM    \n==================================\n"<<"\n"<<endl;
    string name;
    int roll;
    int j;
    int marks = 0;
    int i;
    cout<<"ENTER STUDENT NAME: ";
    getline(cin,name);
    cout<<"ENTER STUDENT ROLL NUMBER: ";
    cin>>roll;
    cout<<endl;
    for( i = 1; i <= 5; i++){
     cout<<"ENTER MARKS OF SUBJECT "<<i<<": ";
        cin>>j;
        marks = marks +j;
    }
    cout<<"===============\n   RESULT    \n===============\n"<<endl;
    cout<<"STUDENT NAME :"<<name<<endl;
    cout<<"ROLL NUMBER :"<<roll<<"\n"<<endl;
    cout<<"TOTAL MARKS :"<<marks<<endl;
    float average = marks/5;
    cout<<"AVERAGE MARKS :"<<average<<endl;
    if (average>=90){
        
        cout<<"GRADE : A+";
    }
    else if (average>=80){
        cout<<"GRADE : A";
    }
    else if (average>=70){
        cout<<"GRADE : B";
    }
    else if (average>=60){
        cout<<"GRADE : C";
    }
    else if (average>=50){
        cout<<"GRADE : D";
    }
    else{
        cout<<"GRADE : F";
    }
    if(average>=45){
        
       cout<<"\nSTUDENT IS PASS";
    }
    else{
        
        cout<<"\nSTUDENT IS FAIL";
    }
    cout<<"\n==================================\n";
    return 0;
}
