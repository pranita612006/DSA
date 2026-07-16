//WAF to print all unique values from an array
#include <iostream>
using namespace std;

void frequency(int arr[], int n) {
    for (int i = 0; i < n; i++) {

        // Check if element was already counted
        bool visited = false;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                visited = true;
                break;
            }
        }

        if (visited)
            continue;

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        cout << arr[i] << " -> " << count << endl;
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
    frequency(arr, n);

return 0;

}

// TIME COMPLEXITY - O(n^2)
// SPACE COMPLEXITY - inout space O(n), extra space O(1)


/*
Miastakes:
1] using = not ==
2] if statement placed at wrong loop
3] not initialized j correctly
4] missing [] and wrong syntax
*/