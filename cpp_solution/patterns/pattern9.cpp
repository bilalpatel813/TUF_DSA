//Pattern 9

//Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:



//    * 
//   ***
//  *****
// *******
//*********
//*********
// *******
//  *****
//   ***
//    *


//Print the pattern in the function given to you
//practice solution:
#include <iostream>
using namespace std;
int pattern9(int n){
    for(int i =1;i<=n;i++){
        for(int j= 1;j<=n-i;j++){
            cout<<" ";
            }
        for(int k =1;k<=2*i-1;k++){
            cout<<"*";
            }
        cout<<endl;    
        }
    for(int i =1;i<=n;i++){
        for(int j= 1;j<i;j++){
            cout<<"-";
            }
        for(int k =1;k<=2*n-2*i+1;k++){
            cout<<"*";
            }
        cout<<endl;    
        }
    }
int main(){
    int n=4 ;
    pattern9(n);
    return 0;
    }
//Tuf solution 
class Solution {
public:
    void pattern9(int n) {
       for(int i =1;i<=n;i++){
           for(int j= 1;j<=n-i;j++){
                cout<<" ";
            }
           for(int k =1;k<=2*i-1;k++){
                cout<<"*";
            }
            cout<<endl;    
        }
        for(int i =1;i<=n;i++){
            for(int j= 1;j<i;j++){
                 cout<<"-";
            }
            for(int k =1;k<=2*n-2*i+1;k++){
                 cout<<"*";
            }
            cout<<endl;    
        }   
    }
};