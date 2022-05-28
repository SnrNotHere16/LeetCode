/*
Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2x.
*/
bool isPowerOfTwo(int n) {
	    //Loops
		/*
        int count = 0; //checks to see how many ones(binary) are in the int 
        if (n < 1)
                return false;
		//cycle through each bit
        for (int i = 0; i < 31; i++) {
                if (n&(0x0001<<i))
                        count++;
        }
		//if only one bit then it is a power of two
        if (count == 1)
                return true;
        else
                return false;
		*/ 
		
		/*
        if (n < 1) 
                return false; 
        for (int i = 0; i < 31; i++) {
                if ((n>>i)&0x0001) {
                        if ((n>>i) & 0xFFFFFFFE) 
                                return false; 
                }
        } 
        return true;
		*/      

		//No loop solution 
       if ((n>0) && ((n & n-1) == 0)) 
                return true;
        else
                return false;        
}
        