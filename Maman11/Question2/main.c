#include <stdio.h>
#include "suffix.h"

int main()
{
    char c;
    char str[128]; // Maximum length of input string is 127 characters

    // Prompt for input
    printf("Enter a character followed by a string: ");

    // Read input
    scanf(" %c %[^\n]", &c, str);

    // Call the suffix function
    int numSuffixes = suffix(c, str);

    // Print results
    printf("\nNumber of suffixes starting with '%c': %d\n", c, numSuffixes);

    return 0;
}
