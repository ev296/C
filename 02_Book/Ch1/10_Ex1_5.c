#include <stdio.h>
 
 main() {
	
	int c;
	printf ("The value of \"getchar() != EOF\" is 0 when the file ends, if not, the value is 1\n");
	while ((c=getchar()) != EOF){
		printf ("Value of \"getchar() != EOF\": %i\n", ((c=getchar()) != EOF));
	}
 } 

//RogelioASR
