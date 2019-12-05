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
    int n, i=0;
    char opcodes[LEN_STR];
    fp = fopen( "2019_two.txt", "r");
    fscanf(fp, "%s", opcodes);
    fclose (fp);
    n = strlen(opcodes);
    char clean_array[n];
    
    //printf("%c", opcodes[0]);
    
    while (i<n){
       
        strncpy(&clean_array[i], opcodes, 2);
        i++;
        //printf("hello");
        
    }
    
    printf("%s", &clean_array[0]);
    
}
