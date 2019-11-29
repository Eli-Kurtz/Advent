#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define NUM_STR  10000
#define LEN_STR  100



int triangulate (char x[], char y[], char z[], int *n2) {

	int side1 = atoi(x);
	int side2 = atoi(y);
	int side3 = atoi(z);
	int count = 0;

	if (side1 < side2 + side3) {
		count += 1;}
	if (side2 < side1 + side3) {
		count += 1;}
	if (side3 < side1 + side2) {
		count += 1;}

	if (count == 3){
		(*n2)++;}


return 0;
}




void reader (FILE *fp, int *n, char lines[][LEN_STR]) {

	char buffer[LEN_STR] = {'\0'};
	char test[10];

	while (fgets (buffer, LEN_STR, fp) != NULL) {

//	sscanf (buffer, "%s", test);

	sscanf (buffer, "%s %s %s", lines[*n], lines[*n+1], lines[*n+2]);

//https://www.tutorialspoint.com/c_standard_library/c_function_sscanf.htm
//This appears to be part of the problem. I cannot use fscanf or scanf because I am reading from a 1D array, not a file or i/o.

//	strncpy (lines[*n], buffer, LEN_STR);

// unsure if I need the third argument, LEN_STR. gcc says I do, but still seg fault.

//	while (fscanf (fp, "%s", lines[*n])) {

//	printf("%s", lines[*n]);

	(*n)++;

//	printf("%s", test);

	}
	
//	printf("%s", lines[0]);

  return;

}


int main () {

	FILE* fp;
	int n, n2;
	char (*temp)[LEN_STR] = malloc( NUM_STR * sizeof(char) * LEN_STR);

	fp = fopen( "2016_three.txt", "r");
	reader( fp, &n, temp);
	fclose (fp);

	char keeper[n][LEN_STR];
	
	for (int i=0; i < n; i++) {

		strncpy( keeper[i], temp[i], LEN_STR);

//		printf("\n%s\n", keeper[i]);

	}	

	for (int i=0; i < n; i++) {
	
		triangulate(keeper[i], keeper[i+1], keeper[i+2], &n2);
		printf("\n%d\n", n2);
	}

	return 0;
}




