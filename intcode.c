//
//  intcode.c
//  
//
//  Created by Eli Kurtz on 12/5/19.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LEN_STR 1000

int compute (int *array[], int array_len){
 
    int x = 0, a = 0;

    printf("\n%d\n", *array+1);
    
 /*   while (x < array_len) {
        
        if ((*array+x) == 1){
            (*array+(x+1) + *array+(x+2)) = a;
            *array+(x+3) = a;
            //array+(x+3) = (*array+(x+1) + *array+(x+2));
            x = x+4;
        }
        if ((*array+x) == 2){
            array+(x+3) = (*array+(x+1) * *array+(x+2));
            x = x+4;
        }
        else {
            printf("FATAL");
            break;
        }
    }*/
    
    return 0;
}


int main () {
    
    FILE* fp;
    int n, x, array_len=0, int_token;
    char opcodes[LEN_STR];
    fp = fopen( "2019_two.txt", "r");
    fscanf(fp, "%s", opcodes);
    fclose (fp);
    
    int buffer[LEN_STR];
    char* token = strtok(opcodes, ",");
    
    while (token != NULL) {
        int_token = atoi(token);
        //printf("\n%d\n", int_token);
        buffer[array_len] = int_token;
        token = strtok(NULL, ",");
        array_len++;
    }
    
    int clean[array_len];
    
    for (x=0; x<array_len; x++){
        clean[x] = buffer[x];
    }
    
    //printf("%d", clean[0]);
    
    compute(&clean, array_len);
    
}

