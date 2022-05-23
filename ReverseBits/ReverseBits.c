    uint32_t r = 0; 
    printf("%x %d\n", n,n); 
    for (int i = 0; i < 31; i++){
        o = n&((0x0001<<(i))); //clear all the bits except the one you want
        //printf("%x\n",o);
        //o = o>>(31-i); //shift to the correct position 
        r = r|o; 
    }  
    printf("%x\n", r);
    return r; 
}