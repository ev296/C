#include <stdio.h>

int main()
{
    int c, nl, nt, nb;
    
    nl=0;
    nt=0;
    nb=0;
    
     while((c=getchar())!=EOF)
    {
        if(c=='\n')
        {
            nl++;
        }
        printf("New lines:");
        printf("%d\n",nl);
    
        if(c=='\t')
        {
            nt++;
        }
         printf("Tabs:");
        printf("%d\n",nt);
        
        if(c==' ')
        {
            nb++;
        }
         printf("Blanks:");
        printf("%d\n",nb);
    }
}
