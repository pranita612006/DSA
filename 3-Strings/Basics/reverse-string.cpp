// WAF to reverse a string

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    // Using function ------ need : #include <algorithm>
    string str = "pranita";
    cout<<str<<endl;
    reverse(str.begin(),str.end());
    cout<<str<<endl;

    // Using iterator 
    string str1 = "pawar";
    cout<<str1<<endl;
    int start = 0, end = str1.length() - 1;
    while(start < end){
        swap(str1[start++], str1[end--]);
    }
    cout<<str1<<endl;
    return 0;
}

// TIME COMPLEXITY - O(1)
// SPACE COMPLEXITY - O(1)

/*
Mistakes:
1] not using #include <algorithm>
*/