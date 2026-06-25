// WAF to reverse an array
#include <iostream>
using namespace std;

void revArray(int arr[], int size){
    int start = 0, end = size-1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int size;
    cout<<"Enter size or array : ";
    cin>>size;
    int arr[size];
    cout<<"Elements : ";
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }

    revArray(arr, size);
    cout<<"Reversed Array: ";

    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<" ";

return 0;
}

/*
1] wrting cin in 2nd for 
2] writing cout in 1st for
3] not writing last cout
4] accessing array before size of array
5] wrote only 1st for not 2nd
*/