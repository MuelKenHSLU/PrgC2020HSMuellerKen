#include <stdio.h>

int main( int argc, char* argv[] )
{
	short largeShort = 32760;
	printf("before:%d",largeShort);
	largeShort = largeShort + 12345;
	printf("after: %d \n\n", largeShort);

	int numerator = 19, denominator = 5, result = 0;
	printf("before: num %d, den %d, res %d \n",numerator, denominator, result);
	result = numerator/denominator;
	printf("after:num %d, den %d, res %d \n\n", numerator, denominator, result);
	
	double e = 2.718281828;
	printf("before: %f \n", e);
	e++;
	printf("after ++: %f \n", e);
	e--;
	printf("after --: %f \n\n", e);
	
	double dblNumber = 12.8
	printf("before: %f \n", dblNumber);
	//nicht zulässig!
	//dblNumber = dblNumber%3;
	//printf("after: %f \n", dblNumber);
	
	return 0;
}
