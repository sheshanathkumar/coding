#include <stdio.h>

int main(){
	
	FILE *fp;
	int a, i;
	char d[100] = "------------------";
	scanf ("%d", &a);
	if (fp = fopen("Table.txt", "a")) {
		fputs(d, fp);
		for (i = 1; i <= 10; i ++) {
			fprintf (fp, "\n%d * %d = %d", a, i, a*i);
		}
		fprintf(fp, "\n" );

	}
	fclose (fp);
	return 0;
}