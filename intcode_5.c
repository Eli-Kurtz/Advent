//
//  intcode_5.c
//  
//
//  Created by Eli Kurtz on 12/10/19.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LEN_STR 10000

int interact() {
    
    int input=0;
    
    printf("enter an input ");
    
    scanf("%d", &input);
    //input = atoi(&getchar( ));
    
    printf("you entered %d\n\n", input);
    
    return input;
}

int parse_opcode (int opcode) {
    
    printf("opcode is %d", opcode);
    return 0;
    
}


void compute (int *array, int array_len){
    
    int a = 0, x = 0, position = 0, p_one = 0, p_two = 0, store = 0, output = 0, temp_int=0;
    //char four_digit[8];
    //printf("the program has reached the compute func");
    
    while (1) {
        
        if (*(array+x) == 1){
            position = *(array+(x+3));
            p_one = *(array+(x+1));
            p_two = *(array+(x+2));
            *(array+(position)) = *(array+(p_one)) + *(array+(p_two));
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
       /* else if ((*(array+x) == 3) && (*(array+(x+2)) == 4)) {
            store = *(array+(x+1));
            output = *(array+(x+3));
            x = x+4;
        }*/
        else if (*(array+x) == 3){
            store = interact();
            position = *(array+(x+1));
            *(array+(position)) = store;
            printf("the position decribed is %d", position);
            printf("the number at position is now %d", *(array+(position)));
            x = x+2;
        }
        else if (*(array+x) == 4){
            output = *(array+(x+1));
            printf("output is %d", output);
            x = x+2;
        }
        else {
            parse_opcode(*(array+x));
            break;
        }
            
            
            /*//temp_int = *(array+x);
            snprintf(four_digit, 8, "\n%d\n", *(array+x));
            //https://www.geeksforgeeks.org/snprintf-c-library/
            printf("\n%d was FATAL\n\n", *(array+x));
            printf("four digit is %s\n\n", four_digit);
            printf("the first digit in four digit is %c\n\n", four_digit[1]);

            if (strcmp(four_digit[1], "1") == 0){
                //https://stackoverflow.com/questions/2603039/warning-comparison-with-string-literals-results-in-unspecified-behaviour
                printf("\n\n its a 1\n");
            }
            
            break;
        }*/
    }
    
    return;
}



int main () {
    
    FILE* fp;
    int n, x, array_len=0, int_token, a=0, i=0;
    char opcodes[LEN_STR];
    fp = fopen( "2019_five.txt", "r");
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
    int clean_copy[array_len];
    
    for (x=0; x<array_len; x++){
        clean[x] = buffer[x];
        //printf("%d-", clean[x]);
    }
    
    for (i=0; i<array_len; i++){
        clean_copy[i] = clean[i];
        //printf("clean copy i is %d", clean_copy[i]);
    }
    
    compute(clean_copy, array_len);
    
    for (x=0; x<array_len; x++){
        printf("%d-", clean_copy[x]);
    }
    
    return 0;

    
}

