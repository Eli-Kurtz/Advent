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

void compute (int *array, int array_len){
 
    int a = 0, x = 0, position = 0, p_one = 0, p_two = 0;

    //printf("\n%d\n", *array);
    
    while (x < array_len) {
        
        if (*(array+x) == 1){
            position = *(array+(x+3));
            p_one = *(array+(x+1));
            p_two = *(array+(x+2));
            //printf("position is %d", position);
            *(array+(position)) = *(array+(x+p_one)) + *(array+(x+p_two));
            //array+(x+3) = (*array+(x+1) + *array+(x+2));
            x = x+4;
            position = 0;
        }
        else if (*(array+x) == 2){
            position = *(array+(x+3));
            p_one = *(array+(x+1));
            p_two = *(array+(x+2));
            *(array+(position)) = *(array+(x+p_one)) * *(array+(x+p_two));
            x = x+4;
            position = 0;
        }
        else {
            printf("\n%d was FATAL", *(array+x));
            break;
        }
    }
    
    return;
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
        //https://www.geeksforgeeks.org/strtok-strtok_r-functions-c-examples/
    }
    
    int clean[array_len];
    
    for (x=0; x<array_len; x++){
        clean[x] = buffer[x];
        printf("%d-", clean[x]);
    }
    
    printf("\n");
    compute(clean, array_len);
    printf("\n");
    
    
    for (x=0; x<array_len; x++){
        printf("%d-", clean[x]);
    }
    
}

