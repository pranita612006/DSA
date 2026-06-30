// WAF to calculate 2nd smallest element in an array
#include <iostream>
using namespace std;

void large(int arr[], int n){
    int smallest = arr[0], secondsmallest = INT_MAX;
    for(int i = 1; i<n; i++){
        if(smallest > arr[i]){
            secondsmallest = smallest;
            smallest = arr[i];
        }
        else if( smallest < arr[i] && secondsmallest > arr[i]){
            secondsmallest = arr[i];
        }
    }

    if(secondsmallest== INT_MAX){
        cout<<"no";
    } else {
        cout << "Smallest = " << smallest << endl;
        cout << "Second smallest = " << secondsmallest;
    }

}


int main(){
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    large(arr,n);
    return 0;
}


// TIME COMPLEXITY - O(n)
// SPACE COMPLEXITY - inout space O(n), extra space O(1)
