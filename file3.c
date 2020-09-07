#include <stdio.h>

int main (){
	FILE *fp;
	char a[100];

	if ( fp = fopen("Name.txt", "a")) {
		gets(a);
		fputs (a, fp);
	}
	fclose (fp);
	return 0;
}