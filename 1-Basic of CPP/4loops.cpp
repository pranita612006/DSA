//Program for different loops implementation(for, while, do-while) and working of functions.

#include <iostream>
using namespace std;
//for loop 
void funl1(){
    for(int i=0; i<4; i++){
        cout<<"hello"<<endl;
    }
}
//while loop 
void funl2(){
    int count=1;
    while(count <= 3){
        cout<<"It is 1st, count="<<count<<endl;
    count++;
    }
}
//do while loop 
void funl3(){
    int count=1;
    do{
        cout<<"It is new"<<endl;
        count++;
    }while(count < 3);
}

int main(){
    funl1();
    funl2();
    funl3();
    return 0;
}