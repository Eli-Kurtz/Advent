#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#include<stddef.h>
#include<ctype.h>

void assess_tri (int count) {

	FILE* ptr;
	int n[3], i, sum, inner_count;

	ptr = fopen("2016_three.txt", "r");
	while (i < 3) {
		fscanf( ptr, "%d", &n[i]);
		i = (i + 1);
		}

	fclose( ptr );
 
	for (i=0; i<3; i++) {
		printf("\n%d\n", n[i]);
		}

	sum = n[0] + n[1] + n[2];
	
	for (i=0; i<3; i++) {
		if ((sum - n[i]) > (n[i])) {
			inner_count = inner_count + 1;
			}
		}

	if (inner_count == 3) {
		count = count + 1;
		printf("%d", count);
		printf("this is a triangle");
		}

	else {
		printf("this is NOT a triangle");
		}

	return;

}

int  main () {

	assess_tri (0);

return (0);
}
