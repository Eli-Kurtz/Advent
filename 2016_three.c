#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define NUM_STR  1000
#define LEN_STR  100



void reader (FILE *fp, int *n, char lines[][LEN_STR]) {

	char buffer[LEN_STR] = {'\0'};
	char test[10];

	while (fgets (buffer, LEN_STR, fp) != NULL) {

	sscanf (buffer, "%s", test);

//	sscanf (buffer, "%s %s %s", lines[*n], lines[*n+1], lines[*n+2]);

//https://www.tutorialspoint.com/c_standard_library/c_function_sscanf.htm
//This appears to be part of the problem. I cannot use fscanf or scanf because I am reading from a 1D array, not a file or i/o.

//	strncpy (lines[*n], buffer, LEN_STR);

// unsure if I need the third argument, LEN_STR. gcc says I do, but still seg fault.

//	while (fscanf (fp, "%s", lines[*n])) {

//	printf("%s", lines[*n]);

//	(*n)++;

	printf("%s", test);

	}
	
//	printf("%s", lines[0]);

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
