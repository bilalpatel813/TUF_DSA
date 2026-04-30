#actorial of a given number

#You are given an integer n. Return the value of n! or n factorial.

#Factorial of a number is the product of all positive integers less than or equal to that number
#practice solution.
n=2
def fact(n):
    if n==0:
        return 1
    return n*fact(n-1)
    
print(fact(n))

#TUF SOLUTION :
class Solution:
    def factorial(self, n):
        if n==0:
            return 1
        return n*self.factorial(n-1)
