//WAF to perform linear search on vectors
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, target;
    cout<<"Enter n: ";
    cin>>n;

    vector<int> vec(n);
    cout<<"Enter values: "<<endl;
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }
    
    cout<<"Enter target: "<<endl;
    cin>>target;

    for(int i=0; i<n; i++){
        if(vec[i] == target){
            cout<<"Target found at position "<<i+1;
            return 0;
        }
    }
    cout<<"Not found!";
    return 0;
}

/*
Mistakes:
1] Using unnecessary function
*/