#Pattern 11

#Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

#1 
#0 1 
#1 0 1 
#0 1 0 1 
#1 0 1 0 1

#Print the pattern in the function given to you.
#practice solution :
n=4
for i in range(1,n+1):
    for j in range(i):
        print((i +  j) % 2 , end=" ")
    print()

#for i in range(1, n+1):
#    num = i % 2  
#    for j in range(i):
#        print(num, end=" ")
#        num = 1 - num  
#    print()