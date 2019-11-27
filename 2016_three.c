#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#include<stddef.h>
#include<ctype.h>

int main () {

	FILE* ptr;
	int n[2], i;

	ptr = fopen("2016_three.txt", "r");
	while (i < 3) {
		fscanf( ptr, "%d", &n[i]);
		i = (i + 1);
		}

	fclose( ptr );
 
	for (i=0; i<3; i++) {
		printf("\n%d\n", n[i]);
		}
 
}

void run () {

	main ();

}
