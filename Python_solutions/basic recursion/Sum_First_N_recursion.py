#Sum of First N Numbers
#Given an integer N, return the sum of first N natural numbers. Try to solve this using recursion.
#practice solution:
n=4
def numbers(n):
    if n ==1 :
        return 1
    return n+numbers(n-1)
print(numbers(n)) 
#TUF SOLUTION:
 class Solution:
    def NnumbersSum(self, N):
        #your code goes here
            if N==1:
               return 1
            return N+self.NnumbersSum(N-1)
            

