#Reverse an array
#Given an array arr of n elements. The task is to reverse the given array. The reversal of array should be inplace.
#practice solution 1:
n=5
arr=[1,2,1,1,5,1]
arr2=[1,2,1,1,5,1]
def reverse1(arr,n):
    if n==0:
        return
    arr.reverse()
    reverse1(arr, n-1)
    print(n)
    return arr
print(reverse1(arr, n))
#practice solution 2 
def reverse2(arr2, n):
    arr2.reverse()
    return arr2
print(reverse2(arr2, n))
#TUF SOLUTION:
 class Solution:
    def reverse(self, arr: list, n: int) -> None:
        return arr.reverse()
