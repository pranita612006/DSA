//WAF to print sum of digits from string 
#include <iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    int n = str.length();
    int sum = 0;
 
    for(int i = 0; i<n; i++){
         if(isdigit(str[i])){
            sum += str[i] - '0';
           }
    }
    cout<<sum;
return 0;
}

// TIME COMPLEXITY - O(n)
// SPACE COMPLEXITY - O(1)

/*
Mistakes:
1] Confusing characters with integers wrote: sum += str[i]; it gives ASCI values of characters
*/