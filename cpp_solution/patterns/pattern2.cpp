//Pattern 2
//Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:


//*
//**
//***
//****
//*****
//Print the pattern in the function given to you.
//practice solution :
#include <iostream>
using namespace std;
int pattern2(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
            }
        cout<<endl;  
        }
    }
int main(){
    int n= 4;
    pattern2(n);
    return 0;
    }
//TUF solution:
class Solution {
public:
    void pattern2(int n) {
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            cout<<endl;    
        }
    }
};