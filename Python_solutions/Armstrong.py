#You are given an integer n. You need to check whether it is an armstrong number or not. Return true if it is an armstrong number, otherwise return false.

#An armstrong number is a number which is equal to the sum of the digits of the number, raised to the power of the number of digits
#        

#solution:
    class Solution:
    def isArmstrong(self, n):
        k=len(str(n))
        num = n
        a=0
        while num>0:
            Digit=num % 10
            a += Digit**k
            num=num//10
        return a==n
        