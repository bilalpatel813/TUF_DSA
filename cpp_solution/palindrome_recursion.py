#Check if String is Palindrome or Not

#Given a string s, return true if the string is palindrome, otherwise false.

#A string is called palindrome if it reads the same forward and backward.
#practice solution :
s="aabbaaa"
def palindrome(i,s):
    if i >= len(s) // 2:
        return True

    if s[i] != s[len(s) - i - 1]:
        return False

    return palindrome(i + 1, s)
    
print(palindrome(0, s))
#TUF SOLUTION:
 class Solution:
    def Check(self, i,s):
        if i >= len(s) // 2:
            return True

        if s[i] != s[len(s) - i - 1]:
            return False

        return self.Check(i + 1, s)
      
    def palindromeCheck(self, s):
        return self.Check(0,s)
        #your code goes here
        

   
