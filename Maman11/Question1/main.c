#include <stdio.h>
#include "my_add.h"

void print_binary(unsigned int num)
{
    if (num)
    {
        print_binary(num >> 1);
        putchar((num & 1) ? '1' : '0');
    }
}

int main()
{
    unsigned int a, b;

    printf("Enter the first non-negative integer: ");
    scanf("%u", &a);
    printf("Enter the second non-negative integer: ");
    scanf("%u", &b);

    unsigned int sum = my_add(a, b);

    printf("\nInputs: %u and %u\n", a, b);
    printf("Sum (in base 10): %u\n", sum);

    // Convert and print in binary
    printf("Inputs (in binary): ");
    print_binary(a);
    printf(" and ");
    print_binary(b);
    printf("\nSum (in binary): ");
    print_binary(sum);
    printf("\n");

    return 0;
}