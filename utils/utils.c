#include "utils.h"

#include <stdio.h>

bool is_binary_palindrome(uint64_t x, uint8_t bits_count) {
    uint64_t reversed = 0;
    uint64_t temp = x;
    for (int i = 0; i < bits_count; ++i) {
        reversed = (reversed << 1) | (temp & 1);
        temp >>= 1;
    }
    return reversed == x;
}

bool require(bool condition, char requirement[]) {
    if (!condition) {
        printf("%s\n", requirement);
    }
    return condition;
}

void print_binary(uint64_t bits, uint8_t bits_count, bool is_float) {
    for (int i = bits_count - 1; i >= 0; --i) {
        putchar((bits >> i) & 1 ? '1' : '0');
        if (is_float) {
            if (i == (bits_count-1)-0) {
                putchar('|');
            } else if (i == (bits_count-1)-11) {
                putchar('|');
            }
        }
    }
}
