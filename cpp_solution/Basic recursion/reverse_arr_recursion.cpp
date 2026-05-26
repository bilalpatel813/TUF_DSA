//Reverse an array
//Given an array arr of n elements. The task is to reverse the given array. The reversal of array should be inplace.
//practice solution 1:
#include <iostream>
#include <list>
using namespace std;
void reverse(int arr[], int n){
        if(n<=1){
            return ;
            }
       swap(arr[0],arr[n-1]);
       reverse(arr+1,n-2); 
    }

int main() {
    int arr []= {1, 2, 3, 4, 5};
    int n=5;
    reverse(arr,n);
    
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
//TUF SOLUTION:
class Solution{
public:
    void reverse(int arr[], int n){
        if (n <= 1) return;

        swap(arr[0], arr[n - 1]);

        reverse(arr + 1, n - 2);
    }
};
