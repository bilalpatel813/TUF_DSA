//Given a digit d (0 to 9), find the sum of the first 50 positive integers (integers > 0) that end with digit d.
//A number ends with digit d if its last digit is d.
// practice solution 
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int d =1;
    int pos_int=1;
    int sum =0;
    int k=0;
    vector <int> mylist;
    while(pos_int>0){
        pos_int=k*10+d;
        cout<<"\npos_int: "<<pos_int;
        mylist.push_back(pos_int);
        sum+=pos_int;
        k+=1;
        cout<<"\nsum:"<<sum;
        if(mylist.size() == 50){
            break;
            }
        }
    return 0;
    }
// TUF SOLUTION 
class Solution {
    public:
    int whileLoop(int d) {
        // Your code goes here
        int pos_int=1;
        int Sum=0;
        int k=0;
        vector <int> Mylist;
        while(pos_int>0){
            pos_int=k*10+d;
            Mylist.push_back(pos_int);
            Sum+=pos_int;
            k+=1;
            if(Mylist.size() == 50){
                return Sum;
                break;
            }
        }
    }
};    