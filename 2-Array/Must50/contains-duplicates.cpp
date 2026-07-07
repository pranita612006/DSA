//WAF to check an array contains duplicates or not
#include <iostream>
using namespace std;

void unique(int arr[], int n){
    int count = 0;
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i] == arr[j]){
                 count++;
            }
        }
    }
    if(count > 1){
        cout<<"Array contains duplicates"<<endl;
    } 
    else 
    { 
        cout<<"Array does not contains duplicates"<<endl;
    }
}

int main(){

    int n;
    cout<<"enter number of elements in array: ";
    cin>>n;
    int arr[n];
    cout<<"enter "<<n<<" values of element: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    unique(arr, n);

return 0;

}

// TIME COMPLEXITY - O(n^2)
// SPACE COMPLEXITY - inout space O(n), extra space O(1)


/*
Miastakes:
1] using count outside the loop
2] if statement placed at wrong loop
3] not initialized j correctly
4] missing [] and wrong syntax
*/