//
//  2019_one.c
//  
//
//  Created by Eli Kurtz on 12/1/19.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_STR 10000
#define LEN_STR 100


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
    int n;
    char (*temp)[LEN_STR] = malloc( NUM_STR * sizeof(char) * LEN_STR);
    
    fp = fopen( "2019_one.txt", "r");
    reader( fp, &n, temp);
    fclose (fp);

    char keeper[n][LEN_STR];
    
    for (int i=0; i < n; i++) {
        
        strncpy( keeper[i], temp[i], LEN_STR);
    }
    
    //printf("%s", keeper[0]);
    
    free(temp);
    
    return 0;
    
}
