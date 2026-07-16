//WAF to remove non alphabetic character from string 
#include <iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    int n = str.length();
 
    for(int i = 0; i<n; i++){
         if(isalpha(str[i])){
            cout<<str[i];
        }
    }
return 0;
}

// TIME COMPLEXITY - O(n)
// SPACE COMPLEXITY - O(1)

/*
Mistakes:
1] using logic to remove non alphabetic character rather than using logic to print on alphabetic one 
*/