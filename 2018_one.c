#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#include<stddef.h>
#include<ctype.h>

int main () {

	FILE* ptr;
	int n[1000], i=0, the_count;

	ptr = fopen("2018_one.txt", "r");

	while (1) {
	//for (i=0; i < 100; i ++) {
		fscanf( ptr, "%d", &n[i]);
		i = (i+1);
		//printf("\n%d\n", n[i]);
		if (feof( ptr )) {
			break;
			}
		}

	fclose( ptr );

	for (i=0; i<100; i++) {
		printf("\nthe next number is %d\n", n[i]);
		the_count += n[i];
		printf("\nthe running total is %d\n", the_count);

	}

	printf("%d", the_count);	

return 0;
}

 void run () {

	main();
}
