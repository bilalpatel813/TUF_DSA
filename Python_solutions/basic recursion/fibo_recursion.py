#Fibonacci Number

'''The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,

F(0) = 0, F(1) = 1
F(n) = F(n - 1) + F(n - 2), for n > 1.'''
#Practice solution:
n=2
def fib(n):
    if n<=1:
        return n
    last= fib(n-2)
    slast=fib(n-1)
    return last + slast
print(fib(n))
#TUF SOLUTION:
 class Solution:
    def fib(self, n):
        #your code goes here
        if n<=1:
           return n
        last=self.fib(n-2)
        slast=self.fib(n-1)
        return last+slast   