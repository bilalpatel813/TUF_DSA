//Pattern 12

//Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:



//1                1
//12            21
//123        321
//1234    4321
//1234554321


//Print the pattern in the function given to you
//practice solution:
#include <iostream>
using namespace std;
int pattern12(int n){
    for(int i =1;i<=n;i++){
        for(int j= 1;j<2*n+1;j++){
            if(j<=i){
                cout<<j;
                }
            else if(j > 2*n-i){
                cout<<2*n+1-j;
                }
            else{
                cout<<" ";
                }        
            }
        cout<<endl;    
        }
}
int main(){
   int n=4;
   pattern12(n);
   return 0; 
    }
// TUF SOLUTION:
class Solution {
public:
    void pattern12(int n) {
        for(int i =1;i<=n;i++){
            for(int j= 1;j<2*n+1;j++){
                if(j<=i){
                  cout<<j;
                }
                else if(j > 2*n-i){
                    cout<<2*n+1-j;
                }
                else{
                    cout<<" ";
                }        
            }
            cout<<endl;    
        }
    }
};    
    