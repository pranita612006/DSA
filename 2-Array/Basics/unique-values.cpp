//WAF to print all unique values from an array
#include <iostream>
using namespace std;

void unique(int arr[], int n){
    for(int i = 0; i<n; i++){
        int count = 0;
        
        for(int j = 0; j<n; j++){
            if(arr[i] == arr[j]){
                 count++;
            }
        }
    
    if(count == 1){
    cout<< arr[i] <<" ";
    }
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

/*
Miastakes:
1] using = not ==
2] if statement placed at wrong loop
3] not using j correctly
4] missing [] and wrong syntax
*/