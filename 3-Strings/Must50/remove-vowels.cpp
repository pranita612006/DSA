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