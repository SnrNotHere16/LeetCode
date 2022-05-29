bool isPowerOfThree(int n) {
        int t = 1162261467;

        if (n < 0)
                return false;
        else
                for (int i = 0; i < 20; i++){
                        if (n == t)
                                return true;
                        else if (n > t)
                                return false;
                        else
                                t=t/3;
                }
        return false;

        
        
} 