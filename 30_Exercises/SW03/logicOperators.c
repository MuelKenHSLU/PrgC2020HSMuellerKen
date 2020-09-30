#include <stdio.h>
#include <stdlib.h>
int main( int argc, char* argv[] )
{	
	int value1 = 0 , value2 = 0, value3 = 0;
	// make sure,we have exactly 3 arguments
	if (argc !=4)
	{	//usage message
		printf("usage: logicOperators val2 val3 val3\n");
	}
	else
	{	
		value1 = atoi(argv[1]);
		value2 = atoi(argv[2]);
		value3 = atoi(argv[3]);
		
		printf("Value1 %d, Value2 %d, Value3 %d\n", value1, value2, value3);
}
		
	return 0;
}
