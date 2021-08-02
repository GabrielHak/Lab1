#ifndef ARRAY_HELPERS_H
#define ARRAY_HELPERS_H

unsigned int array_from_file(int array[], unsigned int max_size, const char *filepath);

void array_dump(int a[], unsigned int length);

boolean array_is_sorted(int a[], unsigned int max_size);

void array_swap(int a[], int i, int j);

void array_invert(int a[], int length);

#endif