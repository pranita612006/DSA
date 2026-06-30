//WAF for linear search 
#include <iostream>
using namespace std;

int main(){
    int target = 8;
    int arra[4];

    cout<<"enter 4 values: \n";
    for(int i=0; i<4; i++){
        cin>>arra[i];
        if(arra[i]==target){
            cout<<arra[i]<<" at "<<i+1<<endl;
        }
    }

return 0;
}


// TIME COMPLEXITY - O(n)
// SPACE COMPLEXITY - inout space O(n), extra space O(1)


/* 
Mistakes: 
1] i did not used count variable tried to get target using simple comparision 
2] used = in if(arra[i]==target) 
*/