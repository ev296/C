#include <stdio.h>
#include <string.h>

int main()
{
    short largo, i, a=0;//i=posicion, a=elemento de la cadena
    char cadena [15];
   
    printf("Escribe algo\n");
    gets(cadena);
    
    largo=strlen(cadena);
    
    while (cadena[a]!='\0'){//quitar puntuación
        while(cadena[a]=='.'|| cadena[a]==','|| cadena[a]==';'|| cadena[a]==':'|| cadena[a]=='?'|| cadena[a]=='!'|| cadena[a]=='-'|| cadena[a]=='_'|| cadena[a]=='$'|| cadena[a]=='%'|| cadena[a]=='#'|| cadena[a]=='&'){
            for(i=a; i<largo;i++){
                cadena[i]=cadena[i+1];
            }
            largo--;
        }
        a++;
    }
    
    a=0; 
    while (cadena[a]!='\0'){//numeros por xxx
    if(cadena[a]=='1'|| cadena[a]=='2'|| cadena[a]=='3'|| cadena[a]=='4'|| cadena[a]=='5'|| cadena[a]=='6'|| cadena[a]=='7'|| cadena[a]=='8'|| cadena[a]=='9'|| cadena[a]=='0'){
            for(i=a; i<largo;i++){
                cadena[i]='x';
            }
            largo--;
        }
        a++;
      
    }  
    puts(cadena);
    return 0;
}



