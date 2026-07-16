//WAF to count, vowels, consonants, digits and special-character from string
#include <iostream>
using namespace std;

int main(){
    string str;
    cout<<"Enter striing : ";
    cin>>str;
    int vowels = 0, consonants = 0, special_chars = 0, digits = 0;
    for (char ch : str){
        if (isalpha(ch)){
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
            }else{
                consonants++;
            }
        }else if (isdigit(ch)){
            digits++;
        }else{
            special_chars++;
        }
    }
    cout<<"Consonants: "<<consonants<<endl;
    cout<<"Vowels: "<<vowels<<endl;
    cout<<"Digits: "<<digits<<endl;
    cout<<"Special characters: "<<special_chars<<endl;

return 0;
}

// TIME COMPLEXITY - O(n)
// SPACE COMPLEXITY - O(1)

/*
Mistakes:
1] Not using built-in functions when available Instead of ch >= '0' && ch <= '9'
*/
