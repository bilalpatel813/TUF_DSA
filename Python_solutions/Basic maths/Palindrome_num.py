#TUF QUESTION 6
'''You are given an integer n. You need to check whether the number is a palindrome number or not. Return true if it's a palindrome number, otherwise return false.

A palindrome number is a number which reads the same both left to right and right to left.'''
#SOLUTION: 
class Solution:
    def isPalindrome(self, n):
        Rev = 0 
        Dup = n
        while n >0:
            Digit = n % 10
            Rev= Rev*10 +Digit
            n = n //10
        if Dup== Rev :
            return True
        else:
            return False
            