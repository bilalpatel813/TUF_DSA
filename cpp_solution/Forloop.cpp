// TUF QUESTION 9:
//Given two integers low and high, return the sum of all integers from low to high inclusive.
// prctice solution:
#include <iostream>
using namespace std;
int main(){
    int low= 3;
    int high = 7;
    int sum=0 ;
    for(int i=low;i<=high;i++){
        int digit = i;
        sum = digit + sum;
        }
    cout<<"sum :"<<sum;
    return 0;
    }
    
//TUF SOLUTION:
class Solution {
public:
    int forLoop(int low, int high) {
        int Sum=0;
        for(int i=low;i<=high;i++){
            int Digit = i;
            Sum= Digit + Sum; 
        }
        return Sum;
    }
};
    