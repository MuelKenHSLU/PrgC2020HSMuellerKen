#include <stdio.h>

int main( int argc, char* argv[] )
{
	int limitValue = 200;
	int maxLoopExecutions = 100;
	int counter = 0;
	while( counter < limitValue )
	{
		counter++; 
		// ist das gleiche wie : counter = counter + 1
		printf("# of while loop executions: %d\n", counter);
		if( counter > maxLoopExecutions)
		{	
			printf("max #executions exceeded! Aborting. \n");
			break;
		}	
	}
	return 0;
}

