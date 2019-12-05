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


int size_up (char input, int n) {
    
    char clean_str[n];
    
    for (int i=0; i<n; i++){
        
        clean_str[i] = input[i];
        
    }
    
    printf("%s", clean_str[0]);
    
}


int main () {

    FILE* fp;
    int n;
    char opcodes[LEN_STR];
    fp = fopen( "2019_two.txt", "r");
    fscanf(fp, "%s", opcodes);
    fclose (fp);
    n = strlen(opcodes);
    
    //printf("%c", opcodes[0]);
    size_up(opcodes, n);
    
    //printf("%d", n);
    
}
