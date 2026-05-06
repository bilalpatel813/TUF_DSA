//Pattern 3
//Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

//1
//12
//123
//1234
//12345
//Print the pattern in the function given to you.
//practice solution
#include <iostream>
using namespace std;
int pattern3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
            }
        cout<<endl;    
        }
    }
int main(){
    int n=4;
    pattern3(n);
    return 0;
    }
    
//TUF SOLUTION:
class Solution {
public:
    void pattern3(int n) {
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
               cout<<j;
            }
            cout<<endl;    
        }
    }
};