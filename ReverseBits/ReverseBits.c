uint32_t reverseBits(uint32_t n) {
    uint32_t r = 0; 
    for (int i = 0; i < 32; i++){
        if (n&(UINT32_C(0x0001) << i)){
            r += UINT32_C(0x0001)<<(31-i);
        }
    }  
    return r; 
}