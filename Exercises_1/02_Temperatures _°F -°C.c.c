/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int fahr,celsius;
    int lower, upper, step;
    
    lower = 0; /* límite inferior de la tabla de temperaturas */
    upper = 300; /* límite superior */
    step = 20; /* tamaño del incremento */
    
    fahr = lower;
    while (fahr<=upper) {
        celsius = 5*(fahr+32)/9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr+step;
    }
}
