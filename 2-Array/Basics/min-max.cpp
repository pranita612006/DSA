//WAF for finding minimum and maximum element with array index and position
#include <iostream>
using namespace std;

void minmax(int arr[], int n){
    
    int minimum = arr[0], maximum = arr[0];
    int minIndex = 0, maxIndex = 0;

    for(int i = 1; i<n; i++){
        if(arr[i]<minimum){
            minimum = arr[i];//updating value  
            minIndex = i;
        }
        if(arr[i]>maximum){
            maximum = arr[i]; 
            maxIndex = i;  
        }
    }

    cout<<"Smallest element "<<minimum<<" at array index "<< minIndex <<" and position "<< minIndex + 1 <<" in an array"<<endl;
    cout<<"Largest element "<<maximum<<" at array index "<< maxIndex <<" and position "<< maxIndex + 1 <<" in an array"<<endl;

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

/*Miastakes:
1] logic is correct but accessing arr[i] rather than minimum or maximum
2] wrong condition (< or >) used in if statement
3] entered cout statements outside the for loop then i got error: 'i' was not declared in this scope    
4] writtem cout inside if statement gives me incorrect output
5] not using fucntions, writing evrything in main()
*/