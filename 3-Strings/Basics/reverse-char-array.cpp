// WAF to reverse character array

#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char arr[] = "hello\0";
    cout<<"Original String: "<<arr<<endl;
    int start = 0, end = strlen(arr) - 1;
    while(start < end){
        swap(arr[start++], arr[end--]);
    }
    cout<<"Reversed String: "<<arr<<endl;
}

// TIME COMPLEXITY - O(1)
// SPACE COMPLEXITY - O(1)

/*
Mistakes:
1] not ending char array with \0
2] not using increment decrement
*/
