#include<stdio.h>

#define IN 1 
#define OUT 0
//count lines, words, and characters in input
int main () {
    int c, nl, nw, nc, state;
    
    state=OUT;// records wheter the program is currently in a word
    nl=nw=nc=0; //sets al three variables to zero
    
    while ((c=getchar())!=EOF) {
        nc++;
        if (c=='\n') {
            nl++;
        }
        if (c==' '||c=='\n'||c=='\t') {
            state== OUT;
//   || means OR 
        }
        else if (state == OUT) {
            state= IN;
            nw++;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);
}

