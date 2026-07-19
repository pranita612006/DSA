#include <iostream>
using namespace std;
//Ascending
void selectionsort1(int n , int arr[]){
    cout<<"Ascending order: "<<endl;
    for (int i = 0; i<n-1; i++){
        int smallestIdx = i;
        for (int j = i+1; j<n; j++){
            if(arr[j]<arr[smallestIdx]){
                smallestIdx = j;
            }
        }
        swap(arr[i], arr[smallestIdx]);
    }
}

//Descending
void selectionsort2(int n , int arr[]){
    cout<<"Descending order: "<<endl;
    for (int i = 0; i<n-1; i++){
        int smallestIdx = i;
        for (int j = i+1; j<n; j++){
            if(arr[j]>arr[smallestIdx]){
                smallestIdx = j;
            }
        }
        swap(arr[i], arr[smallestIdx]);
    }
}


void printarr(int n, int arr[]){
    for(int i = 0; i<n; i++){
        cout<< arr[i] <<" ";
    }
    cout<<endl;
}

int main(){
    int n = 10;
    int arr[] = {10, 27, 64, 20, 66, 1, 45, 23, 89, 98};
    selectionsort1(n, arr);
    printarr(n, arr);
    selectionsort2(n, arr);
    printarr(n, arr);
    return 0;
}

// TIME COMPLEXITY - O(n^2)
// SPACE COMPLEXITY - O(1)

/*
Mistakes:
1] wrote int smallestIdx = i; at wrong places
2] using swap() instead assigning values smallestIdx = j;
3] wrote smallestIdx = i; instead of smallestIdx = j; after if statement
*/