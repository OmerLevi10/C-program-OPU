#include <stdio.h>
#include "suffix.h"

int suffix(char c, char str[])
{
    int count = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
        {
            printf("%s\n", &str[i]);
            count++;
        }
        i++;
    }
    return count;
}
