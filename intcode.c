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

/*int evaluate_new_array(int *clean, int array_len){
    
    int i=0, z=0;
    while (clean[0] != 19690720) {
        
        for (int i=0; i<100; i++){
            
            for (int z=0; z<100; z++){
                
                clean[1] = z;
                clean[2] = i;
                compute(clean, array_len);
                
            }
        }
    }
    printf("%d, and %d", z, i);
    
    return 0;
}
*/

int copy_array (int *clean, int array_len){
    
    int i =0;
    int clean_copy[array_len];
    
    for (i=0; i<array_len; i++){
        clean_copy[i] = clean[i];
    }
    
    return clean_copy[array_len];
}


void compute (int *array, int array_len){
 
    int a = 0, x = 0, position = 0, p_one = 0, p_two = 0;

    //printf("\n%d\n", *array);
    
    while (x < array_len) {
        
        if (*(array+x) == 1){
            position = *(array+(x+3));
            p_one = *(array+(x+1));
            p_two = *(array+(x+2));
            //printf("position is %d", position);
            //*(array+(position)) = *(array+()
            *(array+(position)) = *(array+(p_one)) + *(array+(p_two));
            //array+(x+3) = (*array+(x+1) + *array+(x+2));
            x = x+4;
            position = 0;
        }
        else if (*(array+x) == 2){
            position = *(array+(x+3));
            p_one = *(array+(x+1));
            p_two = *(array+(x+2));
            *(array+(position)) = *(array+(p_one)) * *(array+(p_two));
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
    
    int clean_copy[array_len];
    clean_copy[array_len] = copy_array(clean, array_len);
    printf("\n\na copy was made");
    //this may be unneccessary depending on how I proceed.
    
    printf("\n");
    compute(clean, array_len);
    printf("\n");
    
    
    for (x=0; x<array_len; x++){
        printf("%d-", clean[x]);
    }
    
    
    evaluate_new_array(clean, array_len);
    
   /* while (clean[0] != 19690720) {
        
        for (int i=0; i<100; i++){
            
            for int z=0; z<100; z++)
        }
        
    }
    */
    
}

