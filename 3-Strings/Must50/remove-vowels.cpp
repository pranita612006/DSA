//WAF to remove vowels from string
#include <iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    int n = str.length();
 
    for(int i = 0; i<n; i++){
         if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            continue;
        }
         cout<<str[i];
    }
return 0;
}
// TIME COMPLEXITY - O(n)
// SPACE COMPLEXITY - O(1)

/*
Mistakes:
1] Incorrect if conditions i wrote: if(str[i] == 'a'||'e'||'i'||'o'||'u')
*/