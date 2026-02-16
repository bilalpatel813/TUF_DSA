// TUF QUESTION 6
//You are given an integer n. You need to check whether the number is a palindrome number or not. Return true if it's a palindrome number, otherwise return false.

//A palindrome number is a number which reads the same both left to right and right to left.
//SOLUTION :
class Solution {
public:
    bool isPalindrome(int n) {
        int rev =0;
        int dup=n;
        while(n>0){
            int digit = n % 10;
            rev = rev*10 + digit;
            n = n /10;
        }
        if(dup==rev){
            return true;
        }
        else{
            return false;
        }

    }
};