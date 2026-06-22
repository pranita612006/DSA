//WAF to print complete array and access element from array.
#include <iostream>
using namespace std;

int main(){
    //accessing array
    int arra[4];
    cout<<"enter values";
    for(int i=0; i<4; i++){
        cin>>arra[i];
    }
   cout<<"you entered following array"<<endl;
   for(int i=0; i<4; i++){
        cout<<arra[i]<<" ";
    }
    //cin>>arra; 
    //cout<<arra;
    cout<<"\nthe first is "<<arra[0]<<endl;
    cout<<"\nthe last is "<<arra[3]<<endl;

    return 0;
    
}

/*Miastakes:
1] forgot to use namespace
2] accessed whole array as cin>>arra; cout<<arra;
3] used  cout<<"enter values of element "<<i<<":"; insted normal cout<<"enter values";
*/