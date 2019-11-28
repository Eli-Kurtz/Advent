#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main () {

	FILE* fp;
	int n, i=0;
	char a[1000];
	fp = fopen("2015_one.txt", "r");
	
	while (1) {
		
		fscanf( fp, "%c", &a[i]);  
		i = (i+1);
		if (feof( fp )) {
			break;
			}
		}

	fclose( fp );	
	
	printf("%c", a[1]);

}

void run () {

	main();

}

