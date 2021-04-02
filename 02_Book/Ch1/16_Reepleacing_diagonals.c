#include <stdio.h>

int main()
{
    int c;
    
    c = getchar( );
    while  ((c = getchar( )) != EOF)
    {
        if(c=='\t')
        {
            putchar('\t');
        }
            if(c=='\b')
        {
            putchar('\b');
        }    
        if(c=='\\')
        {
            putchar('\\');    
        }
        else
        {
            putchar(c);    
        }
	}
}

