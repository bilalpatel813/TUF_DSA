//Check if String is Palindrome or Not

//Given a string s, return true if the string is palindrome, otherwise false.

//A string is called palindrome if it reads the same forward and backward.
//practice solution :
#include <iostream>
using namespace std;
bool check(int i, string& s) {
        if (i >= s.length() / 2) {
            return true;
        }
        if (s[i] != s[s.length() - i - 1]) {
            return false;
        }

        return check(i + 1, s);
    }
int main(){
    string s= "hannah";
    cout<<check(0,s);
    return 0;
    }
//TUF SOLUTION:
class Solution { 
public:

    bool check(int i, string& s) {
        if (i >= s.length() / 2) {
            return true;
        }
        if (s[i] != s[s.length() - i - 1]) {
            return false;
        }

        return check(i + 1, s);
    }

    bool palindromeCheck(string& s) {
        return check(0, s);
    }
};