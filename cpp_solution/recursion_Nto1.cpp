//Print N to 1 using Recursion

//Given an integer n, write a function to print all numbers from n to 1 (inclusive) using recursion.

//You must not use any loops such as for, while, or do-while.

//The function should print each number on a separate line, in decreasing order from n to 1
//Practice solution:
#include <iostream>
using namespace std;
void reversenumber(int n){
    if(n==0){
        return;
        }
     cout<<"\nn :"<<n;
     reversenumber(n-1);
    }
int main(){
    int n =5;
    reversenumber(n);
    return 0;
    }
// TUF SOLUTION:
class Solution {
  public:
    void printNumbers(int n) {
        // Your code goes here
        if(n==0){
            return;
        }
        cout<<n<<endl;
        printNumbers(n-1);
    }
};    
   
   