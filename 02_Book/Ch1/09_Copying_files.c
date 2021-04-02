// 1a version

#include <stdio.h> 
int main()
{ 
    int c;
    c= getchar();
    while (c!=EOF){  //END OF FILE 
        putchar(c);
        c= getchar();
    }
    return 0;
}

//2a version

#include <stdio.h> 
int main()
{ 
    int c;
    while ((c=getchar())!=EOF){  //END OF FILE 
        putchar(c);
    }
    return 0;
}