#include <iostream>
using namespace std;

int main(){
    int arra[4];
    cout<<"enter values of element ";
    for(int i=0; i<4; i++){
        cin>>arra[i];
    }

    int minimum = arra[0];
    int maximum = arra[0];

    for(int i = 1; i<4; i++){
        if(arra[i]<minimum){
            minimum = arra[i];//updating value   
        }
        if(arra[i]>maximum){
            maximum = arra[i];   
        }
    }

    cout<<"Smallest element "<<minimum<<endl;
    cout<<"Largest element "<<maximum<<endl;

return 0;

}

/*Miastakes:
1] logic is correct but accessing arra[i] rather than minimum or maximum
2] wrong condition (< or >) used in if statement
*/