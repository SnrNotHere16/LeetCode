int mySqrt(int x) {

 long  s = 1;
 if (x < 2)  {
        return x;
 }
 else {
        while(((ss) != x) &&
              !((ss) < x && ((s+1)*(s+1)) > x)) {
         s++;
        }

        return s;
 }
}