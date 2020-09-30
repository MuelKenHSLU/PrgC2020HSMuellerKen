#include <stdio.h>

int main( int argc, char* argv[] )
{ 
	printf ("Number of Input Arguments: %d\n" , argc);
	
	for( int i =0; i < argc; i++ )
	{ 	
		printf("Argument %d war %s\n", i,argv[i]);
	}
	return 0;
}
