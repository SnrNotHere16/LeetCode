uint32_t reverseBits(uint32_t n) {
    unint32_t o = n; 
    uint32_t r = 0; 
    printf("%x", n); 
    for (int i = 0; i < 32; i++){
        o = n&(0x0001<<(31-i)); //clear all the bits except the one you want
        
    }  
    return r; 
}