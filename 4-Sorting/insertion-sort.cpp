//WAF to implement insertion sort
#include <iostream>
using namespace std;
//Ascending
void insertionsort1(int n , int arr[]){
    cout<<"Ascending order: "<<endl;
    for (int i = 0; i<n; i++){
        int current = arr[i];
        int prev = i-1;
        while(prev >= 0 && arr[prev] > current){
            arr[prev+1] = arr[prev];
            prev--;
        }
    arr[prev + 1] = current;
    }
}

//Descending
void insertionsort2(int n , int arr[]){
    cout<<"Descending order: "<<endl;
    for (int i = 0; i<n; i++){
        int current = arr[i];
        int prev = i-1;
        while(prev >= 0 && arr[prev] < current){
            arr[prev+1] = arr[prev];
            prev--;
        }
    arr[prev + 1] = current;
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
    insertionsort1(n, arr);
    printarr(n, arr);
    insertionsort2(n, arr);
    printarr(n, arr);
    return 0;
}

// TIME COMPLEXITY - O(n^2)
// SPACE COMPLEXITY - O(1)

/*
Mistakes:
1] wrote cout<<arr[i] after loop instead arr[prev + 1] = current;
2] using for()
*/