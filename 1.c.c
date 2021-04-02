#include <stdio.h>//standard input and output

//return typee = int(erger)
//argc = how many command-line arguments as character arrays
//args = (pointer to) an ARRAY of the command-line arguments as character arrays

int main(int argc, char** args)
{
    int x, y, z; //intergers variables (storage space)
    
    x=3;//initial values 
    y=7;
    
    z=x; //snap values
    x=y;
    y=z;
    
    if (x>y){ //condition
        printf("if: Hello\n");
    }
    
    while(x>0){ //loop (cycle): check first, do later
        printf("%i\n", 2*x); //imprime un entero (%i) que sea 2 veces x 
        x--;// lower by one
    }
    
    x=z; 
    do{ //do first, check the condition after
        printf("do-while: %i\n", 2*x);
        x--;
    }
        while(x>0);
        
    for(x=1 ;x<= 5;x+=2 ){ // (initialization; condition; action) += increment by 2
        printf("y - x = %i now and x= %i\n", y-x, x); //regular content
    }
    return 0;
}




