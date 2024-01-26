#include <stdio.h>

// Exercise 1.3 - Fahrenheit to Celsius
// Modify the temperature conversion program to print a heading above the table

int main() {

    float f,c;            
    int min,incr,max;   

    min = 0;  
    incr = 20; 
    max = 300; 

    f = min; 
    printf ("Fahrenheit \t Celsius\n"); // Heading
    while (f <= max){ 

        c = (5.0/9.0)*(f-32.0);  
        printf ("%3.0f \t\t %6.1f\n",f,c);
                                
        f = f + incr; 
    }
                                
}

