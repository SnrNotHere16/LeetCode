bool isPowerOfTwo(int n) {
        int count = 0;
        if (n < 1)
                return false;
        for (int i = 0; i < 31; i++) {
                if (n&(0x0001<<i))
                        count++;
        }
        if (count == 1)
                return true;
        else
                return false;
        
}
        