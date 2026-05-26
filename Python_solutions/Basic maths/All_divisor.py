#TUF QUESTION 9:
#You are given an integer n. You need to find all the divisors of n. Return all the divisors of n as an array or list in a sorted order.

#A number which completely divides another number is called it's divisor.
# solutions:
    #practice solution:
n =int(input("enter any number o get all divisor: "))
ans=[]
for i in range(1,n+1):
    if n%i==0:
        print(i)
        ans.append(i)
print(ans)      

# TUF solution:
    class Solution:
    def divisors(self, n):
        ans=[]
        for i in range(1,n+1):
            if n%i==0:
                ans.append(i)
        return ans        
            