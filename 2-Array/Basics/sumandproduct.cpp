// WAF to calculate sum and product of all numbers in an array
#include <iostream>
using namespace std;

void sum(int arr[], int n){

    int sum = 0, product = 1;

    for(int i = 0; i<n; i++){
        sum = sum + arr[i];
        product = product * arr[i];
    }

    cout<<"sum: "<<sum<<endl;
    cout<<"product: "<<product<<endl;

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

    sum(arr, n);

    return 0;
}


// TIME COMPLEXITY - O(n)
// SPACE COMPLEXITY - inout space O(n), extra space O(1)


/*
Miastakes:
1] forgot to call fucntion
*/