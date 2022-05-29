bool isPowerOfThree(int n) {
		//Loop solution 1
		/*
	    int t  = 3;
        if (n < 0 )
                return false;
        else if (n == 1 || n == 1162261467)
                return true;
        else
                for (int i = 0; i < 18; i++) {
                        if(n == t)
                               return true;
                        else
                                t=3*t;

                }
                return false;
				
		*/ 
		
		//Loop solution 2
        int t = 1162261467;

        if (n < 0)
                return false;
        else
                for (int i = 0; i < 20; i++){
                        if (n == t)
                                return true;
                        else if (n > t)
                                return false;
                        else
                                t=t/3;
                }
        return false;

        
        
} 