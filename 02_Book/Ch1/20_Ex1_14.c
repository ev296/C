#include <stdio.h>

int main()
{
   int c, i, l, b, n, t;
   int p[10]; //long of the word
   
   l, b, n, t =0;
   
   for(i=0; i <10; i++){
     p[i] =0;
    }
    
    while ((c=getchar())!= EOF){ //lenght
        if (c != ' ' && c != '\n' && c != '\t') {
            l++;
        }
        if (c==' '){
            b++;
        }
        if (c=='\n'){
            n++;
        }
        if (c=='\t'){
            t++;
        }
        printf("\nLength\tBlanks\tNewLines\tTables\n");
	for(i = 1; i < 10; i++){
		printf("%d\t%d\t%d\t%d\n", l,b,n,t);
        }
    }
}


