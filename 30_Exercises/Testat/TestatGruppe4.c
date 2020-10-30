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

//void WriteDataTotxt(struct DataPoint dataPoints[], long Points, int* pointer);

void PrintTime (long long timestamp);




int main(int argc, char *argv[]){

//txtFileP = fopen( "pressureSpike.txt","w");

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


PrintPoints (myDataPoints, Points);

//WriteDataTotxt(myDataPoints, Points, txtFileP);

//fclose(txtFileP);

fclose (fid);


return 0;
}

//Funktion um das Array auszugeben.

void PrintPoints (struct DataPoint array[], long Points)
{
	
	for(int k = 0;  k < Points; k+= 1)
{
	printf("%d %lld  \t %d \t %d  \t %d \n",k, array[k].timestamp, array[k].pressure, array[k].systemState, array[k].alarmState);
	}
	return;
 }
 
void WriteDataTotxt(struct DataPoint dataPoints[], int numberOfPoints, int* pointer){
	for(int k = 0; k < numberOfPoints-1; k++){
    time_t rawtime = dataPoints[k].timeStamp / 1000;
    int bits[4];
    int* bitsP = IntToBinaryArray(dataPoints[k].systemState, bits);
    fprintf (pointer, "%.24s; %d; %d; %d; %d; %d; %d; \n", ctime(&rawtime), dataPoints[k].pressure, bitsP[3], bitsP[2], bitsP[1], bitsP[0], dataPoints[k].alarmState);
  }
  return;
}

int* IntToBinaryArray(int num, int* bitsArray){
	int counter = 0;
	while(num){
		if(num&1)
			bitsArray[counter] = 1;
		else
			bitsArray[counter] = 0;
		num>>=1;
		counter++;
	}
	return bitsArray;
}
  // Funktion Aufgabe 1
 void PrintTime (long long timestamp){
 time_t rawtime = timestamp/1000;
 
 printf (" The current local time is: %s",ctime (&rawtime));
 return;
 }
