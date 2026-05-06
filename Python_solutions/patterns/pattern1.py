#Pattern 1
#Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

#*****
#*****
#*****
#*****
#*****

#Print the pattern in the function given to you
#practice solution:
n=4
for i in range(n):
    for j in range(n):
        print("*", end="")
    print()
#TUF SOLUTION:    
class Solution:
    def pattern1(self, n):
        for i in range(n):
            for j in range(n):
                print("*", end="")
            print()    
    