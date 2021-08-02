/* First, the standard lib includes, alphabetically ordered */
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>


/* Maximum allowed length of the array */
#define MAX_SIZE 100000

void print_help(char *program_name) {
    /* Print the usage help of this program. */
    printf("Usage: %s <input file path>\n\n"
           "Sort an array given in a file in disk.\n"
           "\n"
           "The input file must have the following format:\n"
           " * The first line must contain only a positive integer,"
           " which is the length of the array.\n"
           " * The second line must contain the members of the array"
           " separated by one or more spaces. Each member must be an integer."
           "\n\n"
           "In other words, the file format is:\n"
           "<amount of array elements>\n"
           "<array elem 1> <array elem 2> ... <array elem N>\n\n",
           program_name);
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


int main() {
    
    printf("Ingrese el tamaño del array: ");
    
    unsigned int length;
    scanf("%u", &length);

    int array[length];

    for(unsigned int i = 0; i < length; i++){
        printf("Ingresa el valor para la posicion [%d]: ", i);
        scanf("%d", &array[i]);
    }
    
    /*dumping the array*/
    array_dump(array, length);
    
    return (EXIT_SUCCESS);
}
