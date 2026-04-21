#Given an array arr of n elements. The task is to reverse the given array. The reversal of array should be inplace.
#Practice solution 
arr=[1, 2,1,4,5,1]
arr.reverse()
print(arr)

#TUF SOLUTION:
class Solution:
    def reverse(self, arr: list) -> None:
        arr.reverse() 
        return arr


