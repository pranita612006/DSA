//WAF to capitalize first and last character of the string 
#include <iostream>
using namespace std;

int main() {
    cout<<"------------------------------------------"<<endl;
    string str;
    cout<<"Enter the sentence: ";
    getline(cin, str);
    int n = str.length();
    for(int i = 0; i<n; i++){
        // Capitalize first letter of a word
        if (isalpha(str[i]) &&  (i == 0 || str[i - 1] == ' ')) {
            str[i] = toupper(str[i]);
        }
        // Capitalize last letter of a word
        if (isalpha(str[i]) && (i == n - 1 || str[i + 1] == ' ')) {
            str[i] = toupper(str[i]);
        }
    }
    cout<<str<<endl;
    cout<<"------------------------------------------"<<endl;
    string word;
    cout<<"Enter the sentence : ";
    while (cin >> word) {   // Reads one word at a time
        word[0] = toupper(word[0]);                     // First letter
        word[word.length() - 1] = toupper(word[word.length() - 1]); // Last letter
        cout << word << " ";
    }
    cout<<"------------------------------------------"<<endl;

    return 0;
}

// TIME COMPLEXITY - O(n)
// SPACE COMPLEXITY - O(1)

/*
Mistakes:
1] Using cin when getline() is needed 
2] str[i - 1] == " " not using ' '
*/
