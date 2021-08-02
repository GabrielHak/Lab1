#include <stdio.h>
#include <stdlib.h>

#include "boolean.h"
#include "array_helpers.h"

unsigned int array_from_file(int array[],
           unsigned int max_size,
           const char *filepath) {
    //your code here!!!
    FILE *fp = fopen(filepath, "r");
    unsigned int length;
    if(fp != NULL){
        fscanf(fp, "%u", &length);
        if(length <= max_size){
            for(unsigned int i = 0; i < length; i++){
                fscanf(fp, "%d", &array[i]);
            }
        }
        fclose(fp);
    }
    return length;
}

void array_dump(int a[], unsigned int length) {
    //your code here!!!!!
    printf("[");
    for(unsigned int i = 0; i < length; i++){
        printf(" %d", a[i]);
        if(i != length-1) printf(",");
    }
    printf("]\n");
}

boolean array_is_sorted(int a[], unsigned int max_size){
    for(unsigned int i = 0; i < max_size-1; i++){
        if(a[i] > a[i+1]) return false;
    }
    return true;
}