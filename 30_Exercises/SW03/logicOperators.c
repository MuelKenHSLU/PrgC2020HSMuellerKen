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
		if (value1 < 0 || value2 < 0 || value3 < 0)
		printf("The entered values are not all positive. Exiting.\n");
		else
		{ 
			//Grösste Zahl
			
			if (value1>value2 && value1>value3)
			{
			printf("The largest of the entered values is: %d\n", value1);
			}
			else if (value2> value1 && value2> value3)
			{ 
			printf("The smallest of the entered values is: %d\n", minvalue);	
		
			else
			
			printf("The largest of the entered values is: %d\n", value3);	
			}
			
			// Kleinste Zahl
			if (value1<value2 && value1<value3)
			{ 
			printf("The smallest of the entered values is: %d\n", value1);
			}
			else if (value2<value1 && value2<value3)
			{
			printf("The smallest of the entered values is: %d\n", value2);
			}
			else
			
			printf("The smallest of the entered values is: %d\n", value3);	
			}
			
		
			printf("The sum of all values is: %d\n", value1 + value2 + value3);
			printf("The average of all values is:%f\n", (value1 + value2 + value3)/3.0);
			printf("The largest of the entered values is: %d\n" , maxValue);
			
		

}
		
	return 0;
}	
