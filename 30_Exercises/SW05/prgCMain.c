// modified during class, SW05
#include <stdio.h>
#include <stdlib.h>

typedef enum	{
	MAIN_MENU = 1,
	NUMSTAT,
	CUBIC,
	FACTORIAL,
	NCHOOSEK,
	BINARY,
	ARRAY_TEST,
	EXIT = 99
} MenuItem;

// function declarations

MenuItem PrintMainMenu(void);
long int ComputeCubic( long int x);
long Factorial (long n );
long Nchoosek ( long n, long k); 
long decimalToBinary(int decimalnum);
float Numstat ( float inputnum1, float inputnum2);
void ArrayTest (void);

//Programm Start
int main( int argc, char* argv[])
{ 		
	
	MenuItem menuSelected = MAIN_MENU;
		int run = 1;
		long int inputc= 0;
		long inputf	=  0;
		long inputn	= 0;
		long inputk	= 0;
		int decimalnum = 0;
		float inputnum1 = 0;
		float inputnum2 = 0;
		
	while(run)
	{	
		switch(menuSelected){
		
			case MAIN_MENU:
			menuSelected = PrintMainMenu();
			break;

			case NUMSTAT:
			printf("Enter first number:");
			scanf("%f", &inputnum1);
			printf("Enter second number:");
			scanf("%f", &inputnum2);	
			printf("The sum of the values is %.3f\n", inputnum1+inputnum2);		
			printf("The absolute diffrence is %.3f\n", inputnum1-inputnum2);
			printf("The product is %.3f\n", inputnum1*inputnum2);
			printf("The Ratio from Value2 to Value1 is %.3f\n\n", inputnum2/inputnum1);
			menuSelected = MAIN_MENU;
			break;			
			
			case FACTORIAL:
			printf("Enter a 'long' number: ");
			scanf("%ld", &inputf);
			printf("%ld factorial is %ld\n\n", inputf, Factorial(inputf));
			menuSelected = MAIN_MENU;
			break;
			
			case CUBIC:
			printf("Enter a 'long int' number: ");
			scanf("%ld", &inputc);
			printf("%ld cubed is %ld\n\n", inputc, ComputeCubic(inputc));
			menuSelected = MAIN_MENU;
			break;
			
			case NCHOOSEK:
			printf("Enter a number for n: ");
			scanf("%ld", &inputn);
			printf("Enter a number for k: ");
			scanf("%ld", &inputk);
			printf("%ld tief %ld beträgt %ld\n", inputn, inputk, Nchoosek(inputn, inputk));
			menuSelected = MAIN_MENU;
			break;
			
			case BINARY:
    			printf("Enter a Decimal Number: ");
   			scanf("%d", &decimalnum);
  		 	printf("The Binary Number of %d is: %ld\n",decimalnum, decimalToBinary(decimalnum));
  			menuSelected = MAIN_MENU;
  			break;
  			
  			case ARRAY_TEST:
  			printf("\n***** ARRAY TEST *****\n");
  			ArrayTest();
  			menuSelected = MAIN_MENU;
  			break;
			
			case EXIT:
			printf("Good Bye and have a nice day!\n");
			run = 0;
			break;
			
			default:
			printf("Invalid Menu Selection\n\n");
			menuSelected = MAIN_MENU;		
			break;
		}
	}
	return 0;
}

// function implementations:
MenuItem PrintMainMenu (void)
{
	MenuItem selection = MAIN_MENU;
	printf("*************************************\n");
	printf("Main Menu\n");
	printf("*************************************\n\n");
	printf("Select from the following options\n");
	printf("%d - NumStat\n", NUMSTAT);
	printf("%d - Cubic\n", CUBIC);
	printf("%d - Factorial\n",FACTORIAL);
	printf("%d - Nchoosek\n",NCHOOSEK);
	printf("%d - Binary\n",BINARY);
	printf("%d - Array_Test\n",ARRAY_TEST);
	printf("%d - Exit\n", EXIT);
	printf("-->");
	scanf("%d", (int*)&selection);
	return selection;
}
	
long int ComputeCubic (long int x)
{
return x * x * x;
}

long Factorial (long n )
{
	long int result = 0;
	if( n >= 1 )
	{
	result = n*Factorial(n-1);
	}
	else 
	{
		result = 1;
	}
	return result;
}	

long Nchoosek ( long n, long k)
{
	long inputn = n;
	long inputk = k;
	long int result = 0;
	
	result= (Factorial(inputn)/(Factorial(inputk)*Factorial(inputn-inputk)));
	
	return result;
} 

long decimalToBinary(int decimalnum)
{
    long binarynum = 0;
    int rem, temp = 1;

    while (decimalnum!=0)
    {
        rem = decimalnum%2;
        decimalnum = decimalnum / 2;
        binarynum = binarynum + rem*temp;
        temp = temp * 10;
    }
    return binarynum;
}

void PrintIntArray(int array[], int arrayLength ){
	for(int i = 0; i< arrayLength; i++ )
	{ 
		printf("%d", array[i]);
	}
	printf("\n");
}

#define INTARRAYLENGTH 6
void ArrayTest(void){
	int intArray[INTARRAYLENGTH] = {0};
	PrintIntArray(intArray, INTARRAYLENGTH);
	for(int i = 0; i< INTARRAYLENGTH; i++)
	{
		intArray[i] = i;
		}
	PrintIntArray(intArray, INTARRAYLENGTH);
}
