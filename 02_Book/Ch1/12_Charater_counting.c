//1a version

#include <stdio.h>
int main()
{
    int c;
    long nc;//32 bits
    
    nc=0;
    while ((c = getchar ( )) != EOF){
        ++nc;
        printf("%ld\n", nc); // imprime un entero long
    }
}

//2a version

#include <stdio.h>

int main()
{
    int c;
    long nc;
    
    for(nc=1;(c = getchar ( )) != EOF; nc++)
    {
        printf("%ld\n", nc);
    }
}
