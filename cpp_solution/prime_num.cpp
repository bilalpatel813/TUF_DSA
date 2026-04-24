//You are given an integer n. You need to check if the number is prime or not. Return true if it is a prime number, otherwise return false.

//A prime number is a number which has no divisors except 1 and itself.
//practice solution
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n=6;
    for(int i=2;n>i;i++){
        if(n%i==0){
            cout<<"False";
            return 0;
            }
        
    }
    cout<<"true";
    return 0;
 }
 
 //TUF SOLUTION:
 class Solution {
public:
    bool isPrime(int n) {
        //your code goes here
        for(int i=2;n>i;i++){
            if(n%i==0){
            return false;
            }   
        }
    return true;
    }
};