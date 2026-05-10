#Pattern 9

#Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:



#    * 
#   ***
#  *****
# *******
#*********
#*********
# *******
#  *****
#   ***
#    *


#Print the pattern in the function given to you #practice solution 
n=5
for i in range(1,n+1):
    for k in range(n-i):
        print(" ", end="")
    for j in range(2*i-1):
        print("*" , end="") 
    print()
for i in range(n):
    for k in range(i):
        print(" ", end="")
    for j in range(2*n-2*i-1):
        print("*" , end="") 
    print()
# TUF SOLUTION:
 class Solution:
    def pattern9(self, n):
            for i in range(1,n+1):
                 for k in range(n-i):
                       print(" ", end="")
                 for j in range(2*i-1):
                       print("*" , end="") 
                 print()
            for i in range(n):
                  for k in range(i):
                        print(" ", end="")
                  for j in range(2*n-2*i-1):
                        print("*" , end="") 
                  print()