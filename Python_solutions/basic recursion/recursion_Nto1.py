#Print N to 1 using Recursion

#Given an integer n, write a function to print all numbers from n to 1 (inclusive) using recursion.

#You must not use any loops such as for, while, or do-while.

#The function should print each number on a separate line, in decreasing order from n to 1
#Practice solution:
n=5
def Reverse(n):
    if n==0:
        return 
    print(n)   
    Reverse(n-1)
    
Reverse(n)
#TUF SOLUTION:
 class Solution:
    def printNumbers(self, n):
        if n==0:
            return
        print(n)
        self.printNumbers(n-1)
        # Your code goes here