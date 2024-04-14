#include "my_add.h"

unsigned int my_add(unsigned int a, unsigned int b)
{
    unsigned int carry = 0, result = 0, mask = 1;

    while (mask)
    {
        unsigned int bit_a = a & mask;
        unsigned int bit_b = b & mask;

        unsigned int sum_bit = bit_a ^ bit_b ^ carry;
        carry = (bit_a & bit_b) | (carry & (bit_a ^ bit_b));

        result |= sum_bit;

        mask <<= 1;
        carry <<= 1;
    }

    return result;
}
