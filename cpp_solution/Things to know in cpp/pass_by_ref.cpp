//Given an array arr of n elements. The task is to reverse the given array. The reversal of array should be inplace.
//Practice solution 
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void reverse(vector<int>& arr) {
        int n = arr.size();
        int i = 0;
        int j = n - 1;

        while (i < j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
};
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    Solution obj;
    obj.reverse(arr);

    for (int x : arr) {
        cout << x << " ";
    }
}

//TUF SOLUTION :
class Solution{
public:
    void reverse(vector<int>& arr){
        int n= arr.size();
        int i =0;
        int j= n-1;
        while(i<j){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
};