#include <stdio.h>
#include <string.h>
#include "../Headers/mString.h"

void array_equal(const int* array1, size_t size1, const int* array2, size_t size2)
{
    if (size1 != size2) 
    {
        printf("\nArray does not match: False\n");
    }

    if(memcmp(array1, array2, size1 * sizeof(int)) == 0)
    {
        printf("Array match: True\n");
    }
}

void chenmang(int *array , size_t size1 , int *array_in , size_t sizearray_in, int position)
{
    int c;
    
    if(position >= 0 && position <= size1) 
    {
        for (c = size1 + sizearray_in - 1; c >= position ; c--)
        {
           array[c] = array[c-sizearray_in]; 
        }

        for(c = position; c < position + sizearray_in; c++)
        {
           array[c] = array_in[c-position];
	    }

        printf("Array after Insert: ");

        for (c = 0; c <= sizearray_in + size1 -1; c++)
        {
            printf("%d", array[c]);
        }	
	}
    
    else
    {
        printf("Can't Insert Array !");
    }
}
