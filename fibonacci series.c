#include <stdio.h>
int main()
{
   /* FIBONNIC series */
   int num1 = 0, num2 = 1, i, fib, n;
   printf("Enter a no \t ");
   scanf("%d", &n);
   printf("the fobannic series of first %d are \n", n);
   printf("%d %5d \t",num1,num2);
   for (i = 2; i < n; i++)
   {
      fib = num1 + num2;
      num1 = num2;
      num2 = fib;
      printf("%d \t", fib);
   }
   return 0;
}
