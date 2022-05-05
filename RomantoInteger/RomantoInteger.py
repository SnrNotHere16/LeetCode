class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        value = 0 
        index = 0 
        #IV IX - 4 and 9 
        #XL XC - 40 90 
        #CD CM - 400 900 
        if "IV" in s: 
            s = s.replace("IV", " ")
            value+=4
        if "IX" in s: 
            s = s.replace("IX", " ")
            value+=9
        if "XL" in s: 
            s = s.replace("XL", " ")
            value+=40
        if "XC" in s: 
            s = s.replace("XC", " ")
            value+=90
        if "CD" in s: 
            s = s.replace("CD", " ")
            value+=400
        if "CM" in s: 
            s = s.replace("CM", " ")
            value+=900
        for i in s: 
            if(i == "I"):
                value+=1
            elif (i == "V"): 
                value+=5 
            elif (i == "X"): 
                value+=10 
            elif (i == "L"):
                value+=50
            elif (i == "C"): 
                value+=100 
            elif (i == "D"): 
                value+=500 
            elif (i == "M"):
                value+=1000
            else: 
                value+=0
        return value