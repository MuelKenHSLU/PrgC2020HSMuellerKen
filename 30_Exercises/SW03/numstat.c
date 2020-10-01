#include <stdio.h>
#include <stdlib.h>
// SW03: Inputauswertung
int main( int argc, char* argv[] )
{
	float value1 = 0 , value2 = 0;
	
	// make sure,we have exactly 2 arguments
	
	if (argc !=3)
	{	//usage message
	
		printf("usage: numstat val1 val2\n");
	}
	else
	{	
		value1 = atof (argv[1]);  
		value2 = atof (argv[2]);
		
		printf("Value1: %.3f, Value2: %.3f\n", value1, value2);
		
		// a) Inputs in ascending order
		
			if (value1 < value2)
			{
			
			printf("Values in ascending order: %.3f  %.3f\n", value1, value2);
			}
			else 
			{
			printf("Values in ascending order: %.3f  %.3f\n", value2, value1);
			}
		// b) Sum of the values
		
			printf("The sum of the values is %.2f\n", value1+value2);		
		

		
		
		
		// c) Absolute Diffrence
			printf("The absolute diffrence is %.2f\n", value1-value2);
		
		
		
		// d) Product
		
			printf("The product is %.3f\n", value1*value2);
			
		
		// e) Ratio (Input2/Input1)
		
			printf("The Ratio from Value2 to Value1 is %.3f\n", value2/value1);
}		

	return 0;
}
