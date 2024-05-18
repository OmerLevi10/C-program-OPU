#ifndef PARTIALSUMSUTILS_H
#define PARTIALSUMSUTILS_H

/**
 * This function calculates the partial sums of an array.
 * It iterates over the array, adding each element to a cumulative sum
 * and stores this cumulative sum in a new array at the corresponding index.
 *
 * @param arr: pointer to the array of integers
 * @param length: number of elements in the array
 * @return: pointer to the new array containing partial sums
 */
int *calculatePartialSums(int *arr, int length);

/**
 * This function prints an array.
 *
 * @param arr: pointer to the array of integers
 * @param length: number of elements in the array
 */
void printArray(const int *arr, int length);

/**
 * This function handles the input process.
 *
 * @param size: pointer to store the size of the array
 * @return: pointer to the array of integers
 */
int *handleInput(int *size);

/**
 * This function frees memory and sets the pointer to NULL.
 *
 * @param ptr: pointer to the memory to be freed
 */
void safeFree(int **ptr);

#endif // PARTIALSUMSUTILS_H
