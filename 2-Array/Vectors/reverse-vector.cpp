//WAF to perform linear search on vectors
#include <iostream>
#include <vector>
using namespace std;

void revvec(vector<int>& vec, int size){
    int start = 0, end = vec.size() - 1;
    while(start < end){
        swap(vec[start], vec[end]);
        start++;
        end--;
    }
}

int main(){
    int size;
    cout<<"Enter size of vector : ";
    cin>>size;
    vector<int> vec(size);
    cout<<"Elements : ";
    for(int i = 0; i<size; i++){
        cin>>vec[i];
    }

    revvec(vec, size);
    cout<<"Reversed Array: ";

    for(int i = 0; i<size; i++){
        cout<<vec[i]<<" ";
    }
    cout<<" ";

return 0;
}

/*
Miastakes:
1] Not using vec.size() directly used size
2] Initialized like vector<int> vec;  not giving parameter for size
3] Forgot to increment and decrement start and end  
*/