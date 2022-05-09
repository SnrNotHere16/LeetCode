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