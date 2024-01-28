#include <stdio.h>

//Exercise 1.9 - Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank

char main ()
{
    char c,pc;
   
        
        while ((c = getchar()) != EOF)
        {
            if (c != ' ')
                putchar(c);

            if (c == ' ') // If our char is empty (space)
                if (c != pc) // Input is only copied to output when the char is different from the previous one (space)
                    putchar(c);
        pc = c; // pc is only updated at the end of the loop 
        } 
}