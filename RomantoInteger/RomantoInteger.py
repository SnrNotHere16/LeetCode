class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        num = str(x)
        i = 0 
        e = len(num)-1

        while (i < e ): 
         if (num[i] != num[e]):
            return False 
         else: 
            i+=1
            e-=1
        return True