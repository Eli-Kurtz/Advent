#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define LENGTH_STRING 100
#define HUGE_NUMBER 10000


void reader (FILE* fp, int* n, char lines[][LENGTH_STRING]) {

        char buffer[LENGTH_STRING] = {'\0'};

        *n = 0;

        while (fscanf (buffer, "%c", fp) != NULL) {
                strcpy( lines[*n], buffer );
                (*n)++;
        }
        printf("%c", lines[0]);

}


int main () {

	FILE* fp;
	int n;
	
	char (*temp)[LENGTH_STRING] = malloc(HUGE_NUMBER * (sizeof(char) * LENGTH_STRING));

	fp = fopen("2015_one.txt", "r");
	reader( fp, &n, temp );
	fclose( fp );
	
}

