#TUF QUESTION 9:
#Given two integers low and high, return the sum of all integers from low to high inclusive.
# prctice solution:
low=3
high=7
sum=0
for i in range(low, high+1):
    digit =i
    sum+=digit
print("sum :", sum)

# TUF SOLUTION
class Solution:
    def forLoop(self, low : int, high : int) -> int:
        sum=0
        for i in range(low, high+1):
            current_digit= i
            sum+=current_digit
        return sum
