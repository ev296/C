#include <stdio.h>
int main()
{
    float cel,farenheit;
    int lower, upper, step;

     lower=0;
     upper=300;
     step=20;
     cel=lower;

     printf("Temperatures °C --> °F\n");

     while (cel<= upper){
         farenheit=(cel*(9.0/5.0))+32;
         printf("%3.0f%6.1f\n", cel, farenheit);
             cel= cel+step;
     }
     }
