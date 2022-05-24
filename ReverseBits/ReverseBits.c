uint32_t reverseBits(uint32_t n) {
    uint32_t o = n; 
    uint32_t r = 0; 
    char bin [32];
   printf("%x %x\n", n, n); 
    for (int i = 0; i < 32; i++){
        if (n&(UINT32_C(0x0001) << i)){
            printf("1");
            //r|=(0x8000>>i); 
            bin[i] = 1; 
        }
        else {
            printf("0"); 
           // r|=(0x0000>>i); 
            bin[i] = 0; 
        }
        
    }  
    printf("\n"); 
    for (int i = 0; i < 32; i++){
        printf("%d ",bin[31-i]); 
        if (bin[31-i])
            r|=(UINT32_C(0x0001)<<i); 
        else 
            r|=(UINT32_C(0x0000)<<i); 
    }
    return r; 
}