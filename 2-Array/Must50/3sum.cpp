// WAF for 3 sum problem (brute force)

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
    cout<<"Digits that gives sum equals to target: "<<endl;

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            for(int k = j + 1; k < n; k++){
                if(vec[i] + vec[j] + vec[k] == target){
                    cout<<vec[i]<<" "<<vec[j]<<" "<<vec[k]<<endl;
                }
            }
        }
    }    
    return 0;
}


// TIME COMPLEXITY - O(n^3)
// SPACE COMPLEXITY - input space O(n), extra space O(1)


/*
Miastakes:
1] using count outside the loop
2] using invalid return //return {vec[i], vec[j], vec[k]};
3] not using vector library
*/