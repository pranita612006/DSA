// WAF for creating a character array, implement a string, access elements and perform basic operations on both

#include <iostream>
#include <string.h> //optional bcoz it already present in <iostream>

using namespace std;

int main(){

    cout<<"**********CHAR ARRAY**********"<<endl;

    char arr1[] = {'A','B','C','D','\0'};
    cout<<"*****************************"<<endl;
    cout<<arr1<<endl;
    cout<<"Size:"<<strlen(arr1)<<endl;
    cout<<"The 3nd element is "<<arr1[2]<<endl;

    char arr2[] = "Hello world";
    cout<<"*****************************"<<endl;
    cout<<arr2<<endl;
    cout<<"Size:"<<strlen(arr2)<<endl;
    cout<<"The 3nd element is "<<arr2[2]<<endl;

    char arr3[23];
    cout<<"*****************************"<<endl;
    cout<<"Enter Array: ";
    cin.getline(arr3, 23, 'p');
    cout<<arr3<<endl;
    cout<<"Size:"<<strlen(arr3)<<endl;
    cout<<"The 2nd element is "<<arr3[2]<<endl;
    cout<<(arr1 == arr2)<<endl;

    cout<<"**********STRING**********"<<endl;
    string str1 = "I am computer engineer";
    string str2 = " and mandala artist too";
    cout<<"String size: "<<str1.length()<<endl;
    cout<<"Concatinated: "<<str1.append(str2)<<endl;
    cout<<"Compare: "<<(str1 == str2)<<endl;
    cout<<"str2 is lesser? : "<<(str1>str2)<<endl;
    cout<<"Insert hey :"<<str1.insert(0, "hey ")<<endl;
    cout<<"Find comp : "<<str1.find("comp")<<endl;
    cout<<"In lower case: "<<tolower(str1);

    return 0;
}

/*
Mistakes:
1] not ending char array with \0
*/