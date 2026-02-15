#TUF QUESTIO 5:
'''You are given an integer n. Return the integer formed by placing the digits of n in reverse order'''
#solution : 
class Solution:
    def reverseNumber(self, n):
        Rev= 0 
        while n>0:
            Digit= n%10
            Rev = Rev*10+Digit
            n = n //10
        return Rev
    
    