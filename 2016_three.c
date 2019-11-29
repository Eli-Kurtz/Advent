#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define NUM_STR  1000
#define LEN_STR  100



void reader (FILE *fp, int *n, char lines[][LEN_STR]) {

// seg fault before this point

//	printf("hello");

	char buffer[LEN_STR] = {'\0'};

	while (fgets (buffer, LEN_STR, fp) != NULL) {
	
	fscanf(buffer, "%s" "%s" "%s", lines[*n], lines[*n+1], lines[*n+2]);

// https://www.tutorialspoint.com/c_standard_library/c_function_scanf.htm	
//	strncpy (lines[*n], buffer, LEN_STR);

// unsure if I need the third argument, LEN_STR. gcc says I do, but still seg fault.

	(*n)++;

	}

  return;

}


int main () {

	FILE* fp;
	int n;
	char (*temp)[LEN_STR] = malloc( NUM_STR * sizeof(char) * LEN_STR);

	fp = fopen( "2016_three.txt", "r");
	reader( fp, &n, temp);
	fclose (fp);

	char keeper[n][LEN_STR];

	return 0;
}
