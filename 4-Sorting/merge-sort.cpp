//WAF to implement merge sort
#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int start, int mid, int end){
    vector<int> temp;
    int i = start, j = mid+1;
    while(i<=mid && j<=end){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }

    for(int idx = 0; idx<temp.size(); idx++){
        arr[idx + start] = temp[idx];
    }
}

void mergeSort(vector<int> &arr, int start, int end){
    if(start<end){
        int mid = start + (end - start)/2; 
        // why not mid = (start+end)/2  bcoz start + end = n and n can be reason of integer overflow condition 
        mergeSort(arr, start, mid); //left
        mergeSort(arr, mid+1, end); //right
        merge(arr,start,mid,end); 
    }   
}

int main(){

    vector<int> arr = {96, 35, 56, 239, 90, 45, 23, 1, 76, 22};
    int start = 0, end = arr.size()-1;
    mergeSort(arr, start, end);

    for(int val : arr){
        cout<< val <<" ";
    }
    cout<<endl;
return 0;
}

// TIME COMPLEXITY - O(n^2)
// SPACE COMPLEXITY - O(1)

/*
Mistakes:
1] i<n inseatd i<n-1 in first for()
2] j<n-1 instead j<n-i-1  and j = i+1 instead j = 0 in 2nd for()
*/