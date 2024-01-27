#include <stdio.h>

//Exercise 1.8 - Write a program to count blanks, tabs and newlines

int main ()
{
    int c,bl,tb,nl; // Char (Input), blanks, tabs and newlines

    bl = tb = nl = 0;

    while ((c = getchar()) != EOF) //Careful with the parentheses | (c = getchar() != EOF) would not return any result
    {

        if (c == ' ')
            bl++;
                    
        if (c == '\t')
            tb++;
        
        if (c == '\n')
            nl++;
        
    }    
    printf ("Blanks =%i\n Tabs = %i\n Newlines = %i\n",bl,tb,nl);
    
}