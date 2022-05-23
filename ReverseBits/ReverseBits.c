uint32_t reverseBits(uint32_t n) {
    uint32_t o = n; 
    uint32_t r = 0; 
    printf("%x", n); 
    for (int i = 0; i < 32; i++){
        o = n&(0x1000>>(i)); //clear all the bits except the one you want
        //printf("%x\n",o);
        //o = o>>(31-i); //shift to the correct position 
        r = r|o; 
    }  
    return r; 
}