//WAF to access elements from vector and perform different operations on vectors
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec = {1, 2, 3};
    cout<<"Initial vector: ";
    for (int i: vec){
        cout<<i<<" ";
    }
    cout<<"\nSize of vector: "<<vec.size()<<endl;
    vec.push_back(4);
    cout<<"After push_back: ";
    for (int i: vec){
        cout<<i<<" ";
    }
    vec.pop_back();
    cout<<"\nAfter pop_back: ";
    for (int i: vec){
        cout<<i<<" ";
    }
    cout<<"\nFront: "<<vec.front()<<" ";
    cout<<"\nBack: "<<vec.back()<<" ";
    cout<<"\nAccessed element: "<<vec.at(0);
    return 0;
}

// TIME COMPLEXITY - O(n)
// SPACE COMPLEXITY - inout space O(n), extra space O(1)