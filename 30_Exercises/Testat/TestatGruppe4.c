#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct DataPoint {
	long long  	timestamp;
	int 		pressure;
	char 		systemState;	
	char 		alarmState;
}__attribute__((packed));

FILE * txtFileP;
// Funktion initialisieren
void PrintPoints (struct DataPoint array[], long Points);


void WritePoints (struct DataPoint array[], long Points);

int BinaryNumber (char dezimal);

int main(int argc, char *argv[]){

//FILE * txtFileP;
txtFileP = fopen( "pressureSpike.txt","w");

// File Öffnen und Pointer setzen
FILE *fid;
fid = fopen("pressureSpike.bin", "rb");
if (fid==NULL) {fputs ( "File error", stderr); exit (1);}

//Anzahl der Datenpunkte 
long Points;
fseek(fid, 0 , SEEK_END);
Points = ftell(fid)/sizeof (struct DataPoint);
rewind (fid); // was macht rewind(fid)
	
// Datenpunkte in ein Array setzen

struct DataPoint myDataPoints[Points];

//Daten in DataPoints einfüllen

fread(myDataPoints,sizeof(struct DataPoint), Points, fid);


PrintPoints (myDataPoints, Points);
WritePoints (myDataPoints, Points);
fclose (txtFileP);

fclose (fid);


return 0;
}

//Funktion um das Array auszugeben.

void PrintPoints (struct DataPoint array[], long Points)
{
	
	for(int k = 0;  k < Points; k+= 1)
{
	printf("%d %lld  \t %d \t %d \t %d \n",k, array[k].timestamp, array[k].pressure, array[k].systemState, array[k].alarmState);
	}
	return;
 }
 
 void WritePoints (struct DataPoint array[], long Points)
 {
	
	for(int k = 0;  k < Points; k+= 1)
{	
	time_t rawtime = array[k].timestamp / 1000;

	fprintf(txtFileP,"%.24s ; %d ; %.4d ; %d \n", ctime(&rawtime), array[k].pressure, BinaryNumber(array[k].systemState), array[k].alarmState);
	}
	return;
 }
 
int BinaryNumber (char dezimal){

 	  int rest, ergebnis=0, faktor=1;
          
          while (dezimal) //solange dezimal != 0 ist
                          {
                          rest = dezimal % 2;
                          dezimal = dezimal / 2;
                                                
                          faktor= faktor * 10;  
                          ergebnis = ergebnis + (rest * faktor)/10;
                         }
  return ergebnis;
  }
