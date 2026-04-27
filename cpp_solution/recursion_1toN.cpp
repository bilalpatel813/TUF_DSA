//Print 1 to N using Recursion

//Given an integer n, write a function to print all numbers from 1 to n (inclusive) using recursion.

//You must not use any loops such as for, while, or do-while.

//The function should print each number on a separate line, in increasing order from 1 to n.
//Practice solution(by backtracking):
#include <iostream>
using namespace std;
void printnumber(int n){
    if(n==0){
        return;
        }
     printnumber(n-1); 
     cout<<"\nnumbers :"<<n;  
    }
int main(){
     int n =5;
    printnumber(n);    
    return 0;
    }
//TUF SOUTION:
class Solution {
  public:
    void printNumbers(int n) {
        // Your code goes here
        if(n==0){
            return;
        }
        printNumbers(n-1);
        cout<<n<<endl;
    }
};