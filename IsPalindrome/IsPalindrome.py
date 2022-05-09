class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        num = str(x) 
        i = 0; 
        e = len(num)-1
        if (x < 0): 
            return False
        while (i < e):
            if (num[i]!=num[e]):
                return False 
            else :
                e-=1 
                i+=1
        return True 
        
        
 class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        original = x 
        rem = 0  
        rev = 0  
        if (x < 0) : 
            return False 
        while (x != 0) : 
            rem = x%10 
            rev = (rev*10)+rem
            x/=10
        if(original == rev): 
            return True
        else : 
            return False