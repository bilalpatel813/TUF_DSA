#Pattern 5

#Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

#*****
#****
#***
#**
#*
#Print the pattern in the function given to you.
#practice solution
n=5 
for i in range(n+1):
    for j in range(i, n):
        print("*" , end="")
    print()
#TUF SOLUTION :
  class Solution:
    def pattern5(self, n):
        for i in range(n+1):
            for j in range(i, n):
                print("*", end="")
            print()  