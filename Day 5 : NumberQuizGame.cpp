
#include <iostream>
using namespace std;
int main() {
  cout<<"==========================\n      NUMBER QUIZ GAME\n==========================\n"<<endl;
  int a,b,c,d,e;
  int total = 0;
  cout<<"QUESTION 1 :- "<<endl<<"WHAT WILL BE THE TOTAL OF 8 + 15 ?"<<endl;
  cin>>a;
       if (a==23){
         cout<<"THE ANSWERS IS CORRECT\n"<<endl;
         total += 1;
        }
    else{
        cout <<"THE ANSWERS IS WRONG\n"<<endl;
    } 
         
  cout<<"QUESTION 2 :- "<<endl<<"WHAT WILL BE THE TOTAL OF 82 + 315 ?"<<endl;
  cin>>b;
    if (b==397){
         cout<<"THE ANSWERS IS CORRECT\n"<<endl;
         total += 1;
        }
    else{
        cout <<"THE ANSWERS IS WRONG\n"<<endl;
    } 
  cout<<"QUESTION 3 :- "<<endl<<"WHAT WILL BE THE TOTAL OF 8 - 15 ?"<<endl;
  cin>>c;
    if (c==-7){
         cout<<"THE ANSWERS IS CORRECT\n"<<endl;
         total += 1;
        }
    else{
        cout <<"THE ANSWERS IS WRONG\n"<<endl;
    } 
  cout<<"QUESTION 4 :- "<<endl<<"WHAT WILL BE THE TOTAL OF 750 / 15 ?"<<endl;
  cin>>d;
    if (d==50){
         cout<<"THE ANSWERS IS CORRECT\n"<<endl;
         total += 1;
        }
    else{
        cout <<"THE ANSWERS IS WRONG\n"<<endl;
    } 
  cout<<"QUESTION 5 :- "<<endl<<"WHAT WILL BE THE TOTAL OF 20 x 4?"<<endl;
  cin>>e;  if (e==80){
         cout<<"THE ANSWERS IS CORRECT\n"<<endl;
         total += 1;
        }
    else{
        cout <<"THE ANSWERS IS WRONG\n"<<endl;
    } 
  cout<<"======================\n";
  cout<<"   YOUR SCORE :"<<total<<"/5"<<endl;
  cout<<"======================\n";
    return 0;
}