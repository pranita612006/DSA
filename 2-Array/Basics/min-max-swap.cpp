// WAF to swap min and max values from an array
#include <iostream>
using namespace std;

void minmax(int arr[], int n){
    
    int minimum = arr[0], maximum = arr[0];
   

    for(int i = 1; i<n; i++){
        if(arr[i]<minimum){
            minimum = arr[i];//updating value  
        }
        if(arr[i]>maximum){
            maximum = arr[i]; 
        }
    }
    cout<<"Before swapping"<<endl;

    cout<<"Smallest element: "<<minimum<<endl;
    cout<<"Largest element: "<<maximum<<endl;

    swap(minimum,maximum);

    cout<<"After swapping"<<endl;

    cout<<"Smallest element: "<<minimum<<endl;
    cout<<"Largest element: "<<maximum<<endl;


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
    minmax(arr, n);

return 0;

}

/*
Miastakes:
1] not using swap() writing maximum=minimum and minimum=maximum
*/