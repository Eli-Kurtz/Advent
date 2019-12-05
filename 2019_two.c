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

int preform(int clean[][1]) {
    
    int n = 0, a = 0;
    
    while (clean[n][0] != NULL) {
        //problem is here I think. Do i need address?
        if (clean[n][0] == 1) {
            a = clean[n+3][0];
            clean[a][0] = clean[n+1][0] + clean[n+2][0];
            n = n+4;
        }
        else if (clean[n][0] == 2) {
            a = clean[n+3][0];
            clean[a][0] = clean[n+1][0] * clean[n+2][0];
            n = n+4;
        }
        else {
            break;
        }
        //printf("%d", clean[0]);
    }
    
    return clean;
}



int main () {

    FILE* fp;
    int n, i=0, a;
    char opcodes[LEN_STR];
    fp = fopen( "2019_two.txt", "r");
    fscanf(fp, "%s", opcodes);
    fclose (fp);
    n = strlen(opcodes);
    //char clean_array[n];
    int size = 133;
    int clean[size][1];
    
    //I only know the len 133 after running the below loop and printing i. maybe clean up later
    
    char* token = strtok(opcodes, ",");
    
    while (token != NULL) {
        printf("%s\n", token);
        a = atoi(token);
        token = strtok(NULL, ",");
        
        clean[i][0] = a;
        //printf("hello");
        i++;
    //https://www.geeksforgeeks.org/strtok-strtok_r-functions-c-examples/
    }
    
    preform(clean);
    
    for (i=0; i<size; i++) {
        printf("\n%d\n", clean[i][0]);
    }
    
    //printf("%d", clean[0][0]);
    
}
