#include <stdio.h>

int main( int argc, char* argv[] )
{
	int readValue = 0;		
	WEITER: printf("Enter a number between (including) 0 and 9 to display a number as text. Enter 10 to stop the program: ");
	scanf("%d", &readValue);


	switch(readValue){
case 0:
	printf("0 as text is 'zero'\n");
	goto WEITER;
case 1:
	printf("1 as text is 'one'\n");
	goto WEITER;
case 2:
	printf("2 as text is 'two'\n");
	goto WEITER;
case 3:
	printf("3 as text is 'three'\n");
	goto WEITER;
case 4:
	printf("4 as text is 'four'\n");
	goto WEITER;
case 5:
	printf("5 as text is 'five'\n");
	goto WEITER;
case 6:
	printf("6 as text is 'six'\n");
	goto WEITER;
case 7:
	printf("7 as text is 'seven'\n");
	goto WEITER;
case 8:
	printf("8 as text is 'eight'\n");
	goto WEITER;
case 9:
	printf("9 as text is 'nine'\n");
	goto WEITER;
case 10: 
	printf("Thank you. Good bye.\n");
	break;
default:
	printf("invalid -> try again.\n");
	goto WEITER;
	
}

	return 0;
}
