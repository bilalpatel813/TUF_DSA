#Pattern 10

#Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:



#*
#**
#***
#****
#*****
#****
#***
#**
#*

#Print the pattern in the function given to you
#practice solution :
n=5
for i in range(1,n):
    for j in range(i):
        print("*", end="")
    print()
for i in range(n):
    for j in range(1,n-i+1) :
        print("*", end="")
    print()
# TUF SOLUTION
class Solution:
    def pattern10(self, n):
        for i in range(1,n):
             for j in range(i):
                  print("*", end="")
             print()
        for i in range(n):
             for j in range(1,n-i+1) :
                  print("*", end="")
             print()
