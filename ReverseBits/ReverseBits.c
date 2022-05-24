uint32_t reverseBits(uint32_t n) {
    uint32_t r = 0; 
	//for loop to check every bit of input and set the reversing 
    for (int i = 0; i < 32; i++){
        if (n&(UINT32_C(0x0001) << i)){
            r |= UINT32_C(0x0001)<<(31-i); //places a 1 on a bit. Starts from the most significant bit
        }
    }  
    return r; 
}