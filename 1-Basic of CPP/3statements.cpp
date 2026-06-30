// Program to implement basic statements(if-else, if-else-if, switch)
#include <iostream>
using namespace std;
    void age(){
        int age;
        cin>>age;
         // if-else statement
        if(age>=18){
            cout<<"You are adult"<<endl;
        }else{
            cout<<"You are not adult"<<endl;
         }

         // if-else-if statement
         if(age<18){
             cout<<"You are child"<<endl;
         }else if(age=18){
             cout<<"You are adult"<<endl;
         }else if(age>18){
             cout<<"You are not adult"<<endl;
         }
    }

    void month(){
        int month;
        //switch case
        cin>>month;
        switch(month){
            case 1: 
            cout<<"jan";
            break;
            case 2: 
            cout<<"feb";
            break;
            case 3: 
            cout<<"mar";
            break;
            default: 
            cout<<"invalid";
        }
    }

int main(){
    cout<<"Enter the age"<<endl;
    age();
    cout<<"Enter the month number"<<endl;
    month();
    
return 0;
}

// TIME COMPLEXITY - O(1)
// SPACE COMPLEXITY - inout space O(1), extra space O(1)