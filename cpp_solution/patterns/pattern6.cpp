//Pattern 6

//Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

//12345
//1234
//123
//12
//1

//Print the pattern in the function given to you
//practice solution:
#include <iostream>
using namespace std;
int pattern5(int n){
    for(int i=1;i<=n;i++){
        for(int j =1;j<=n-i+1;j++){
            cout<<j;
            }
        cout<<endl; 
        }
    }
int main(){
    int n =4;
    pattern5(n);
    return 0;
    }
//tuf solution:
class Solution {
public:
    void pattern6(int n) {
        for(int i=1;i<=n;i++){
            for(int j =1;j<=n-i+1;j++){
                cout<<j;
            }
            cout<<endl; 
        }
    }
};
