
/*
Given a non-negative integer x, compute and return the square root of x.

Since the return type is an integer, the decimal digits are truncated, and only the integer part of the result is returned.

Note: You are not allowed to use any built-in exponent function or operator, such as pow(x, 0.5) or x ** 0.5.
*/
int mySqrt(int x) {

 long  s = 1; //used a long because s will be squared and int is not enough 
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