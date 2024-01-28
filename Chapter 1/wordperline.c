#include <stdio.h>

//Exercise 1.12 - Write a program that prints its input one word per line.

int main ()
{
    int c,pc;
          
        while ((c = getchar()) != EOF)
        {
          if (c == ' ' || c == '\t' ) 
            {
              if ((pc != ' ' && pc != '\t')) //Checks if the previous char is different from the current one, so I don't get a newline for each space or tab
                  putchar('\n'); 
            }

          else
          {
            putchar(c);
          }
                
        pc = c;
        } 
}