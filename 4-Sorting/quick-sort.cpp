//WAF to implement quick sort
#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int start, int end){
    int idx = start - 1, pivot = arr[end];
    for(int j = start; j < end; j++){
        if(arr[j] <= pivot){
            idx++;
            swap(arr[j], arr[idx]);
        }
    }
        idx++;
        swap(arr[end], arr[idx]);
        return idx;
}

void quickSort(vector<int> &arr, int start, int end){
    if(start < end){  //wrong cond
        int pvtIdx = partition(arr,start,end);
        quickSort(arr, start, pvtIdx - 1);
        quickSort(arr, pvtIdx + 1, end);
    }
}
int main(){

    vector<int> arr = {96, 35, 56, 239, 90, 45, 23, 1, 76, 22};
    int start = 0, end = arr.size() - 1;
    quickSort(arr, start, end);

    for(int val : arr){
        cout<< val <<" ";
    }
    cout<<endl;
return 0;
}

// TIME COMPLEXITY - O(n log n)
// SPACE COMPLEXITY - O(1)

/*
Mistakes:
1] if(start < end) here wrong condtion used which is '>'
*/