#include <stdio.h>
#include "partialSumsUtils.h"

/**
 * Main program to get the size of the array and numbers for the array,
 * and make a new array of partial sums.
 */
int main()
{
    int size;
    int *arr = handleInput(&size);

    printf("The array received is: ");
    printArray(arr, size);

    int *partialSumsArr = calculatePartialSums(arr, size);

    printf("The returned partial sums array is: ");
    printArray(partialSumsArr, size);

    safeFree(&partialSumsArr);
    safeFree(&arr);

    return 0;
}
