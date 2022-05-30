int hammingWeight(uint32_t n) {

        int count = 0; //the amount of ones/ the hammingWeight
        //check if n's bit is one, leetcode doesn't allow 0x1<<31
        //so need to check MSB here
        if (n&0x80000000) {
                count++;
        }
        //check the other bits here, check bits 0-31
        for (int i = 0; i < 31; i++) {
                if(n&(0x0001<<i))
                        count++;
        }
        return count;
}