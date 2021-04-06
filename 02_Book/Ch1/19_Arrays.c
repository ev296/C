#include <stdio.h>
//count digits, white space, others

int main(){
    int c, i, nw, no;
    int nd[10]; //array of 10 intergers
    
    nw, no=0;
    for(i=0; i <10; i++){
     nd[i] =0;
    }
    
    while ((c=getchar()) != EOF){
        if(c>= '0'&& c<='9'){  //determines wheter the character in c is a digit
            ++nd[c-'0'];
        }
        else if (c==' '|| c== '\n'|| c=='\t'){
            ++nw;
        }
        else{
            ++no;
        }
        
    printf("digits=");
        for(i=0; i<10; i++){
            printf("%d", nd[i]);
        }
    printf(", white space=%d; other=%d\n", nw, no);
    }
}
