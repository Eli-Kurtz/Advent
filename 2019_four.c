//
//  2019_four.c
//  
//
//  Created by Eli Kurtz on 12/3/19.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define LOW 387638
#define HIGH 919123


//plan of attack: generate all numbers between range and then eliminate

//int remove_decrease (array, c) {
    //forgot that I couldnt easily index an integer in C. contemplating what to do now. maybe I will creat a list of all those numbers that do not satisfy the decrease and then remove them from the first list?
    
    //int false_array[c][6]
    
    
    
    //for(i=0; i < n; i++) {
        
        
        
    //}
    
    
//}



int main () {
    
    int a = LOW;
    char buffer[6];
    int b = HIGH;
    int c = b - a;
    int i = 0;
    
    int array[c];
    
    while (a < b) {
        
        a = itoa(a);
        array[i] = a;
        printf("\n%s\n", array[i]);
        i++;
        a++;
        
    }
    
    //https://stackoverflow.com/questions/10162465/implicit-declaration-of-function-itoa-is-invalid-in-c99
    
}
