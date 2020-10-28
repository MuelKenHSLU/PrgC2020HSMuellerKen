#include <stdio.h>

int main()
{
	FILE *pointer1;
	char array[] = {'M' , ' ', 'T', '1' };
	pointer1 = fopen ("myTextFile.txt", "w");
	fwrite (array , sizeof(char), sizeof(array), pointer1);
	fclose (pointer1);
	return 0;
	}
