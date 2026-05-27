#Pattern 12

#Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

#1                 1
#12             21
#123         321
#1234    4321
#1234554321


#Print the pattern in the function given to you.
#practice solution:
n=4
for i in range(1, n+1):
    for j in range(1, 2*n+1):
         if j <= i:
               print(j, end="")
         elif j > 2*n - i:
                print(2*n + 1 - j, end="")
         else:
                print(" ", end="")
    print()

#TUF  SOLUTION:  
class Solution:
    def pattern12(self, n):
        for m in range(1,n+1):
            for k in range(1,2*n+1):
                if k<=m:
                    print(k, end="")
                elif k > 2*n-m:
                    print(2*n+1-k,end="")
                else:
                    print(" ", end="")
            print()