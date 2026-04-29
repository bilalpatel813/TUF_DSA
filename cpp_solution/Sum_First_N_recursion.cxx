//Sum of First N Numbers
//Given an integer N, return the sum of first N natural numbers. Try to solve this using recursion.
//practice solution:
#include <iostream>
using namespace std;
int numbers(int n){
        if(n==1){
            return 1;
            }
         return n+numbers(n-1);
        }
int main(){
    int n =4;
    numbers(n);
    cout<<numbers(n);
    return 0;
    }
// TUF SOLUTION:
class Solution{	
	public:
		int NnumbersSum(int N){
			//your code goes here
            if(N==1){
                return 1;
            }
            return N+NnumbersSum(N-1);
		}
};