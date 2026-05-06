#Pattern 2
#Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:


#*
#**
#***
#****
#*****
#Print the pattern in the function given to you.
#Practice solution:
n=4
for i in range(n):
    for j in range(i+1):
        print("*", end='')
    print()
#TUF SOLUTION: 
class Solution:
    def pattern2(self, n):
        for i in range(n):
            for j in range(i+1):
                print("*",end="")
            print()