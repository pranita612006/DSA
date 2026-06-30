// WAF to calculate 2nd largest element in an array
#include <iostream>
using namespace std;

void large(int arr[], int n){
    int largest = arr[0], secondlargest = INT_MIN;
    for(int i = 1; i<n; i++){
        if(largest < arr[i]){
            secondlargest = largest;
            largest = arr[i];
        }
        else if(largest > arr[i] && secondlargest < arr[i]){
            secondlargest = arr[i];
        }
    }

    if(secondlargest == INT_MIN){
        cout<<"no";
    } else {
        cout << "Largest = " << largest << endl;
        cout << "Second Largest = " << secondlargest;
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


/*
Mistakes:
1] In for i was initialized to 0 
2] secondlargest = 0
3] if(largest < arr[i]){
       largest = arr[i];
       secondlargest = largest;
   }        wrong sequence 

   if(largest < arr[i]){
       secondlargest = largest;
       largest = arr[i];
   }        correct sequence
*/