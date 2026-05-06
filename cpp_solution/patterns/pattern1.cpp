//Pattern 1
//Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

//*****
//*****
//*****
//*****
//*****

//Print the pattern in the function given to you.
//practice solution:
#include <iostream>
using namespace std;
int star(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
            }
        cout<<endl;    
        }
    }
int main(){
    int n =4;
    star(n);
    return 0;
    }
//TUF SOLUTION:
class Solution {
public:
    void pattern1(int n) {
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<"*";
            }
            cout<<endl;    
        }
    }

};