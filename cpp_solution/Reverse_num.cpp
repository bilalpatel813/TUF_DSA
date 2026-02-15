//TUF QUESTION 5:
//You are given an integer n. Return the integer formed by placing the digits of n in reverse order.
//SOLUTION:
class Solution {
public:
    int reverseNumber(int n) {
        int rev =0;
        while(n > 0){
            int digit = n %10;
            rev = rev*10 +digit;
            n = n / 10;
        }
        return rev;
    }
};