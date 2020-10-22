#include <stdio.h>
#include <stdlib.h>

struct DataPoint {
	long long  	timestamp;
	int 		pressure;
	char 		systemState;
	char 		alarmState;
};

// Funktion implementieren
void PrintPoints (struct DataPoint array[], long Points);

int main(int argc, char *argv[]){

// File Öffnen und Pointer setzen
FILE *fid;
fid = fopen("pressureSpike.bin", "rb");
if (fid==NULL) {fputs ( "File error", stderr); exit (1);}

//Anzahl der Datenpunkte 
long Points;
	fseek(fid, 0 , SEEK_END);
	Points = ftell(fid);
	rewind (fid);
	
// Datenpunkte in ein Array setzen

struct DataPoint myDataPoints[Points];

//Daten in DataPoints einfüllen

fread(myDataPoints,sizeof(struct DataPoint), Points, fid);

//Funktion ausführen 

PrintPoints (myDataPoints, Points);


return 0;
}

//Funktion um die Array auszugeben.

void PrintPoints (struct DataPoint array[], long Points)
{
	
	for(int k = 0;  k < 2; k+= 1)
{
	printf("%lld  \t %d \t %d  \t %d \n", array[k].timestamp, array[k].pressure, array[k].systemState, array[k].alarmState);
	}
 }
