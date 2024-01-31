#include <stdio.h>

//Exercise 1.13 - Write a program to print a histogram of the lengths of words in its input (horizontal).


#define IN 1
#define OUT 0

int main(){
int c, nc, state;
state = OUT;
nc = 0;
int l [10] = {0}; // To make things a bit more simple, I defined the size of my array as 10

    while ((c = getchar()) != EOF) 
    {
        if (c != ' ')
        ++nc;
        
        if(c == ' ' || c == '\t' ) // Words are only completed after pressing tab or space, so make sure to press space after the last word of your input
        {
            state = OUT;
            if(nc > 9) // Words that have more than 9 chars are all stored in the last index of the array
            {
              ++l[9];
              nc = 0;     
            }
            else 
            {
              ++l[nc];
              nc = 0;      
            }
        }
        else if (state == OUT)
        {
            state = IN;
            
        }
        
    }
    printf ("\n");
    for (int i = 1; i < 10; i++) 
    {       
        printf("%d : ", i);
        for (int j = 0; j < l[i]; j++) 
        {
            printf("#");
        }
        printf("\n");
                
    }
    
    return 0;
}