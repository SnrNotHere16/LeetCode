class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x); 
        int ub = s.length()-1;
        int lb = 0; 
        while(ub > lb) {
           if(s[lb] == s[ub]) {
               lb++;
               ub--;
           }
           else 
               return false; 
            
        }
        return true; 
    }
};