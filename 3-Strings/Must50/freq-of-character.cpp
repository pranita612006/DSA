//WAF to print frequency of charachetrs in string 
#include <iostream>
using namespace std;
int main(){
    string str;
    cout<<"enter string"<<endl;
    cin>>str;
    int n = str.length();
    for (int i = 0; i < n; i++) {
        bool visited = false;
        for (int j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                visited = true;
                break;
            }
        }
        if (visited)
            continue;
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }
        cout << str[i] << " -> " << count << endl;
    }

return 0;

}

// TIME COMPLEXITY - O(n^2)
// SPACE COMPLEXITY - inout space O(n), extra space O(1)


/*
Miastakes:
0
*/