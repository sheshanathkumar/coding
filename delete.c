#include <stdio.h>
int main (){

	if (remove ("File1.exe") == 0) 
		printf ("File Deleted\n");
	else printf ("Error\n");
	return 0;
}

