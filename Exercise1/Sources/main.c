#include <stdio.h>
#include <string.h>

#include "../Headers/calc.h"
#include "../Headers/conVert.h"
#include "../Headers/mString.h"

int main()
{
    int array_1[] = {5,1,7,8,2,4,5,0,8,9,7,5,2,3,6,6,8,7,9,8};
    
    // Calc.c
    printf("---CALC---\n");
    sum_Array_1(array_1);
    maxValue_Array_1(array_1);
    minValue_Array_1(array_1);
    poSition_Array_1(array_1);
    printf("\n");

    // Convert.c
    printf("---CONVERT---\n");
    int n;
    n = number_n();
    conVert_binary(n);
    printf("Hex number of %d is: 0X", n);
    conVert_hex(n);

    // mString.c
    printf("\n\n---STRING---");
    int array_2[] = {2,3,6,2,0,1,2,7};
    int array_3[] = {2,3,6,2,0,1,2,7};
    int array_4[] = {2,3,6,2,0,0,0};
    int array_in[] = {7,8,9};

    int ps;

    size_t sizearray_2 = sizeof(array_2) / sizeof(int);
    size_t sizearray_3 = sizeof(array_3) / sizeof(int);
    size_t sizearray_4 = sizeof(array_4) / sizeof(int);
    size_t sizearray_in = sizeof(array_in) / sizeof(int);
       
    array_equal(array_2, sizearray_2, array_4, sizearray_4);
    array_equal(array_2, sizearray_2, array_3, sizearray_3);
    chenmang(array_4, sizearray_4, array_in, sizearray_in, 2);

    return 0;
}