//
//  2019_two.c
//  
//
//  Created by Eli Kurtz on 12/1/19.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NUM_STR 10
#define LEN_STR 1000
#define TRUE 1

int main () {

    FILE* fp;
    int n, i=0, a;
    char opcodes[LEN_STR];
    fp = fopen( "2019_two.txt", "r");
    fscanf(fp, "%s", opcodes);
    fclose (fp);
    n = strlen(opcodes);
    char clean_array[n];
    
    int clean[133] = {0};
    //I only know the len 133 after running the below loop and printing i. maybe clean up later
    
    char* token = strtok(opcodes, ",");
    
    while (token != NULL) {
        printf("%s\n", token);
        a = atoi(token);
        token = strtok(NULL, ",");
        
        clean[i] = a;
        
        i++;
    //https://www.geeksforgeeks.org/strtok-strtok_r-functions-c-examples/
    }
    
    //printf("\n%d\n", clean[0]);
    
    
    
    
}
