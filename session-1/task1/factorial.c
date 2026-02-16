
/*
 * Factorial
 */

 #include <stdio.h>

 int main( void ) {
    int f[20];

    /*
    Code to compute the factorial of each array index
    Print your final answer
   */

   for (int k=0; k<20; k++){
      f[k] = k * f[k-1];
   }
   printf("%ls", f);
    return 0;
 }
