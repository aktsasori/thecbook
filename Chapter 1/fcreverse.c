#include <stdio.h>

// Exercise 1.5 - Fahrenheit to Celsius in reverse order
// Modify the temperature conversion program to print the table in reverse order

int main() {

    float f,c;            
    int min,incr,max;   

    min = 0;  
    incr = 20; 
    max = 300; 

    f = max; 
    printf ("Fahrenheit \t Celsius\n"); // Heading
    while (f >= min){ 

        c = (5.0/9.0)*(f-32.0);  
        printf ("%3.0f \t\t %6.1f\n",f,c);
                                
        f = f - incr; 
    }
                                
}