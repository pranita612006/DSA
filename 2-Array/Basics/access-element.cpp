//WAF to print complete array and access element from array.
#include <iostream>
using namespace std;

int main(){
    //accessing array
    int n;
    cout<<"Enter the number of elements in an array"<<endl;
    cin>>n;

    int arra[n];
    cout<<"Enter values "<<n<<": "<<endl;
    
    for(int i=0; i<n; i++){
        cin>>arra[i];
    }
    cout<<"You have been entered this array: ";
    
    for(int i=0; i<n; i++){
        cout<<arra[i]<<" ";
    }
    cout<<endl;
    
    cout<<"The first is "<<arra[0]<<endl;
    cout<<"The last is "<<arra[n-1]<<endl;

    return 0;
    
}


// TIME COMPLEXITY - O(n)
// SPACE COMPLEXITY - inout space O(n), extra space O(1)

/*
Miastakes:
1] forgot to use namespace
2] accessed whole array as cin>>arra; cout<<arra;
3] used  cout<<"enter values of element "<<i<<":"; insted normal cout<<"enter values";
*/