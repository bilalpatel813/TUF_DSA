#Pattern 6

#Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

#12345
#1234
#123
#12
#1

#Print the pattern in the function given to you.
#practice solution:
n=4 
for i in range(n):
    for j in range(1,n-i+1) :
        print(j, end="")
    print()
    
#Tuf solution :
 class Solution:
    def pattern6(self, n):
        for i in range(n):
            for j in range(1,n-i+1) :
                print(j , end="")
            print()