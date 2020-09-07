#include <stdio.h>

int main () {
	FILE *fp;
	fp = fopen ("Name.txt", "a");
	char a[] = "Student of Mnnit";
	int i;
	if (fp != NULL) 
		for (i = 0; a[i] != '\0'; i ++) fputc(a[i], fp);
	fclose(fp);
	return 0;
}