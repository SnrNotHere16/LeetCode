bool isPowerOfTwo(int n) {
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
        
}
        