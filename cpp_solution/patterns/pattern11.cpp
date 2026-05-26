//practice solution:
#include <iostream>
using namespace std;
int pattern11(int n){
    for(int i =1;i<=n+1;i++){
        for(int j= 1;j<i;j++){
            cout<<(i+j)%2<<" ";
            }
        cout<<endl;    
        }
}
int main(){
   int n=4;
   pattern11(n);
   return 0; 
    }