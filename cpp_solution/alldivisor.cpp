//You are given an integer n. You need to find all the divisors of n. Return all the divisors of n as an array or list in a sorted order.

//A number which completely divides another number is called it's divisor
//Practice solution 
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> arr;
    int n=6;
    for(int i=1;n+1>i;i++){
        if(n%i==0){
            arr.push_back(i); 
          }
        }
        for(int x: arr){
            cout<<x<<" ";
            }
    return 0;
    }
//TUF SOLUTION:
class Solution {
public:
    vector<int> divisors(int n) {
        vector <int> arr;
        for(int i=1;n+1>i;i++){
            if(n%i==0){
                arr.push_back(i); 
            }
        }
        return arr;
    }
};