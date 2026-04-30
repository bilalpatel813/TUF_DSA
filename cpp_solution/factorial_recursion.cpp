//#actorial of a given number

//You are given an integer n. Return the value of n! or n factorial.

//Factorial of a number is the product of all positive integers less than or equal to that number
//practice solution.
#include <iostream>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
        }
    return n*fact(n-1);
    }
int main(){
    int n =3;
    fact(n);
    cout<<fact(n);
    return 0;
    }
// TUF SOLUTION:
class Solution {
public:
    int factorial(int n) {
        if(n==0){
            return 1;
        }
        return n*factorial(n-1);
    }
};
