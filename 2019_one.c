//
//  2019_one.c
//  
//
//  Created by Eli Kurtz on 12/1/19.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define NUM_STR 10000
#define LEN_STR 100


int math_it (char input[], int* fuel_total) {
    
    float mass = atof(input);
    //https://www.tutorialspoint.com/c_standard_library/c_function_atof.htm
    int fuel = floor((mass / 3) - 2);
    //https://fresh2refresh.com/c-programming/c-arithmetic-functions/c-floor-function/
    //printf("the input mass is %f", mass);
    //printf("\n%d\n", round);
    (*fuel_total) = *fuel_total+fuel;
    

    return 0;
    
}

void reader (FILE *fp, int *n, char lines[][LEN_STR]) {
    
    char buffer[LEN_STR] = {'\0'};
    while (fgets (buffer, LEN_STR, fp) != NULL) {
        
        sscanf(buffer, "%s", lines[*n]);
        (*n)++;
    }
    
    return;
    
}


int main () {
    
    FILE* fp;
    int n, fuel_total;
    char (*temp)[LEN_STR] = malloc( NUM_STR * sizeof(char) * LEN_STR);
    
    fp = fopen( "2019_one.txt", "r");
    reader( fp, &n, temp);
    fclose (fp);

    char keeper[n][LEN_STR];
    
    for (int i=0; i < n; i++) {
        
        strncpy( keeper[i], temp[i], LEN_STR);
    }
    
    for (int i=0; i < n; i++) {
        
        math_it(keeper[i], &fuel_total);
        printf("\n%d\n", fuel_total);
        
    }
    
    free(temp);
    
    return 0;
    
}
