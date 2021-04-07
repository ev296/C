#include <stdio.h>

int main()
{
    int c;
    
    c = getchar( );
    while  ((c = getchar( )) != EOF)
    {
        if(c==' ')
        {
            putchar(' ');
            while((c = getchar()) == ' ');
		}
		putchar(c);
	}
    
    return 0;
}

