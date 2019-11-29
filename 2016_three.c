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

	strncpy (lines[*n], buffer, LEN_STR);

// unsure if I need the third argument, LEN_STR. gcc says I do, but still seg fault.

	(*n)++;
	printf("%s", buffer);

	}

  return;

}


int main () {

	FILE* fp;
	int n;
	char (*temp)[LEN_STR] = malloc( NUM_STR * sizeof(char) * LEN_STR);

//	seg fault before here. must be in the malloc. 

//	printf("hello");

	fp = fopen( "2016_three.txt", "r");
	reader( fp, &n, temp);
	fclose (fp);

// seg fault before this point.

//	printf("hello");

// Nope. Turns out the error was that I wasnt returning 0.
	return 0;
}
