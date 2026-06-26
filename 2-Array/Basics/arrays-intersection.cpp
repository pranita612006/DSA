// WAF to print intersection of two arrays.
#include <iostream>
using namespace std;

void intersect(int arr1[], int n, int arr2[], int m){
     for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(arr1[i] == arr2[j]){
                cout<<arr1[i]<<" ";
                arr2[j] = -1;
            break;
            }
        }
    }

}

int main(){

    int n, m;
    cout<<"enter number of elements in array 1: ";
    cin>>n;
    int arr1[n];
    cout<<"enter "<<n<<" values of element in array 1: ";
    for(int i = 0; i<n; i++){
        cin>>arr1[i];
    }

    cout<<"enter number of elements in array 2: ";
    cin>>m;
    int arr2[m];
    cout<<"enter "<<m<<" values of element in array 2: ";
    for(int i = 0; i<n; i++){
        cin>>arr2[i];
    }

    cout<<"intersection: ";
    intersect(arr1, n, arr2, m);

    return 0; 
}