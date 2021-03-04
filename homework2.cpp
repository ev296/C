#include <stdio.h>
#include <math.h>
#define MAX  512 //Choose a number of bits that we want to put

int main (){
    
    int K;
    long a, i, count = 0, flag=0;
    unsigned long bits = MAX;
    
    printf ("How many primary numbers do you want to know?\n");
    scanf("%d", &K);
    
    printf(K <=1? "The first prime number is: \n\n" :"The first %d prime numbers are\n\n", K);
    for(i=2; count<K; i ++){
        flag = 0;
        for(a=2;a<=i;a++){
            if(i%a==0)
             flag ++;
            
        }
        if(flag==1){
            printf("\t%02ld=",i);
            count++;
            flag=0;
        for(bits=MAX; bits>0; bits>>=1){
            if(bits&i)
                printf("1");
            else 
                printf("0");
        }
        printf("\n");
        }
    }
}


