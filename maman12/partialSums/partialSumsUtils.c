#include <stdio.h>
#include <stdlib.h>
#include "partialSumsUtils.h"

int *calculatePartialSums(int *arr, int length)
{
    int *partialSums = (int *)malloc(length * sizeof(int));
    if (partialSums == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1); /* Using 1 to indicate an error */
    }

    int sum = 0;
    int i;
    for (i = 0; i < length; ++i)
    {
        sum += arr[i];
        partialSums[i] = sum;
    }

    return partialSums;
}

void printArray(const int *arr, int length)
{
    int i;
    for (i = 0; i < length; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int *handleInput(int *size)
{
    printf("Enter the size for the array: ");
    if (scanf("%d", size) != 1 || *size <= 0)
    {
        fprintf(stderr, "Invalid size\n");
        exit(1); /* Using 1 to indicate an error */
    }

    int *arr = (int *)malloc(*size * sizeof(int));
    if (arr == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1); /* Using 1 to indicate an error */
    }

    printf("Enter %d values for the array: ", *size);
    int i;
    for (i = 0; i < *size; ++i)
    {
        if (scanf("%d", &arr[i]) != 1)
        {
            fprintf(stderr, "Invalid input\n");
            free(arr);
            exit(1); /* Using 1 to indicate an error */
        }
    }

    return arr;
}

void safeFree(int **ptr)
{
    if (ptr != NULL && *ptr != NULL)
    {
        free(*ptr);
        *ptr = NULL;
    }
}
