//WAF to implement bubble sort
#include <iostream>
using namespace std;
//Ascending
void bubblesort1(int n , int arr[]){
    cout<<"Ascending order: "<<endl;
    for (int i = 0; i<n-1; i++){
        bool isSwap = false;
        for (int j = 0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap (arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap){
            return;
        }
    }
}

//Descending
void bubblesort2(int n , int arr[]){
    cout<<"Descending order: "<<endl;
    for (int i = 0; i<n-1; i++){
        bool isSwap = false;
        for (int j = 0; j<n-i-1; j++){
            if(arr[j]<arr[j+1]){
                swap (arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap){
            return;
        }
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
    bubblesort1(n, arr);
    printarr(n, arr);
    bubblesort2(n, arr);
    printarr(n, arr);
    return 0;
}

// TIME COMPLEXITY - O(n^2)
// SPACE COMPLEXITY - O(1)

/*
Mistakes:
1] i<n inseatd i<n-1 in first for()
2] j<n-1 instead j<n-i-1  and j = i+1 instead j = 0 in 2nd for()
*/