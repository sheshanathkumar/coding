#include <stdio.h>
int main (){
	FILE *fp;

	fp = fopen ("Name.txt", "r");
	if (fp == NULL) {
		printf ("File Not Found\n");
	} else {
		while ( !feof(fp)) {
			char c = fgetc(fp);
			printf ("%c", c);
		}
	}
	fclose (fp);

	return 0;
}