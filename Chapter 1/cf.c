#include <stdio.h>

// Exercise 1.4 - Celsius to Fahrenheit  
// Converts Celsius to Fahrenheit

int main() {

    float f,c;            
    int min,incr,max;   

    min = 0;  
    incr = 5; 
    max = 35; 

    c = min; 
    printf ("Celsius \t Fahrenheit\n"); 
    while (c <= max){ 

        f = (c*1.8)+32;  
        printf ("%3.1f \t\t %6.1f\n",c,f);
                                
        c = c + incr; 
    }
                                
}