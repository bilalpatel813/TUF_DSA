# TUF question 4:
    '''You are given an integer n. You need to return the number of digits in the number.



The number will have no leading zeroes, except when the number is 0 itself.'''
#solution
class Solution:
    def countDigit(self, n):
        count =0
        while(n!=0):
            n = n//10
            count += 1
        return count
    