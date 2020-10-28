#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct DataPoint {
	long long  	timestamp;
	int 		pressure;
	char 		systemState;
	char 		alarmState;
};

// Funktion initialisieren
void PrintPoints (struct DataPoint array[], long Points);

void PrintTime (long long timestamp);


//Funktion für Aufgabe 2


//Funktion für Aufgabe 3

int main(int argc, char *argv[]){

// File Öffnen und Pointer setzen
FILE *fid;
fid = fopen("pressureSpike.bin", "rb");
if (fid==NULL) {fputs ( "File error", stderr); exit (1);}

//Anzahl der Datenpunkte 
long Points;
	fseek(fid, 0 , SEEK_END);
	Points = ftell(fid)/sizeof(struct DataPoint);
	rewind (fid); // was macht rewind(fid)
	
// Datenpunkte in ein Array setzen

struct DataPoint myDataPoints[Points];

//Daten in DataPoints einfüllen

fread(myDataPoints,sizeof(struct DataPoint), Points, fid);

//Funktionen ausführen 

//Aufgabe 1





//Aufgabe 2





//Aufgabe 3



PrintPoints (myDataPoints, Points);


return 0;
}

//Funktion um das Array auszugeben.

void PrintPoints (struct DataPoint array[], long Points)
{
	
	for(int k = 0;  k < 10; k+= 1)
{
	printf("%lld  \t %d \t %d  \t %d \n", array[k].timestamp, array[k].pressure, array[k].systemState, array[k].alarmState);
	}
 }
 
 // Funktion Aufgabe 1
 void PrintTime (long long timestamp){
 time_t rawtime = timestamp;
 
 printf (" The current local time is: %s",ctime (&rawtime));
 return;
 }
