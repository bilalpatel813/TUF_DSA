//Pattern 5

//Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

//*****
//****
//***
//**
//*

//Print the pattern in the function given to you.
//practice solution: 
#include <iostream>
using namespace std;
int pattern5(int n){
    for(int i=1;i<=n;i++){
        for(int j =i;j<=n;j++){
            cout<<"*";
            }
        cout<<endl; 
        }
    }
int main(){
    int n =5;
    pattern5(n);
    return 0;
    }
//TIF SOLUTION :
class Solution {
public:
    void pattern5(int n) {
        for(int i=1;i<=n;i++){
            for(int j =i;j<=n;j++){
                cout<<"*";
            }
            cout<<endl; 
        }
    }
};