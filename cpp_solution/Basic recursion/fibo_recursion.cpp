//Fibonacci Number

//The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,
//F(0) = 0, F(1) = 1
//F(n) = F(n - 1) + F(n - 2), for n > 1.
//Practice solution:
#include <iostream>
using namespace std;
int fib(int n){
    if (n<=1){
        return n;
        }
    int last=fib(n-2);
    int slast=fib(n-1);
    return last + slast;
    }
int main(){
    int n= 3;
    cout<<fib(n);
    return 0;
    }
//TUF SOLUTION:
class Solution {
public:
    int fib(int n) {
        //your code goes here
        if (n<=1){
           return n;
        }
        int last=fib(n-2);
        int slast=fib(n-1);
        return last + slast;
    }
};