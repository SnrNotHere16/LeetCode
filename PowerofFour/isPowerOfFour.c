/*
Given an integer n, return true if it is a power of four. Otherwise, return false.

An integer n is a power of four, if there exists an integer x such that n == 4x.

*/ 
bool isPowerOfFour (int n) {
		//loop solution 1 
		/*
        if (n < 1)
                return false;
        if (n == 1)
                return true;
        else
                //start at 0x04 
                for (int i = 2; i < 31; i = i+2) {
                         if (n&(0x01<<i) && ((n&(n-1)) == 0))
                                 return true; 
                }
        return false;
		*/ 
		//loop solution 2 
		if (n < 1)
				return false;
        else if (n == 1)
                return true;
        else
                //start at 0x04, need to shift up to position 30, so 28 shifts
                for (int i = 0; i < 15; i++) {
                        if ((n&(0x04<<(2*i))) && ((n&(n-1)) == 0))
                                       return true;
                }

        return false;

}