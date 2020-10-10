#include <stdio.h>


typedef enum	{
	einfraenkler = 1,
	zweifraenkler = 2,
	fuenfliber = 5
} SwissCoin;

typedef enum {
	nickle = 5,
	dime = 10,
	quarter = 25
} USACoin;

int main( int argc, char* argv[] )
{
	
	SwissCoin chCoin = fuenfliber; 	//Deklaration und Zuwesiung in einem
	
	
	USACoin usCoin; 			//Deoklaration
	usCoin = nickle;		 	//Zuweisung
	
	
	printf("SwissCoin %d, USCoin %d\n" , chCoin, usCoin );


	return 0;
}
