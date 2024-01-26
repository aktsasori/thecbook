#include <stdio.h>

// Exercise 1.6 - Verify that the expression below is 0 or 1

int main()
{
   int c;
   
   c = (getchar() != EOF);
   printf("0 or 1 ?: %d\n",c);

}