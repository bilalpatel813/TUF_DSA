#Given a digit d (0 to 9), find the sum of the first 50 positive integers (integers > 0) that end with digit d.
#A number ends with digit d if its last digit is d.

#practice solution
d=1
post_int=1
sum=0
Fifty=[] 
k=0
while post_int>0:
        post_int =k*10+d
        print(post_int)
        Fifty.append(post_int)
        sum+=post_int
        k+=1
        if len(Fifty)== 50:
            print(sum)
            break
#TUF SOLUTION :
class Solution:
    def whileLoop(self, d : int) -> int:
        pos_int=1
        Sum=0
        k=0
        Fifty=[]
        while pos_int>0:
            pos_int=k*10+d
            Fifty.append(pos_int)
            Sum+=pos_int
            k+=1
            if len(Fifty) == 50:
                return Sum 
                break 

        # Your code goes here      
   