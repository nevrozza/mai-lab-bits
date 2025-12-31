#include "utils.h"

#include <stdio.h>

bool is_binary_palindrome(const uint64_t x, const uint8_t bits_count) {
    uint64_t reversed = 0;
    uint64_t temp = x;
    for (int i = 0; i < bits_count; ++i) {
        reversed = (reversed << 1) | (temp & 1);
        temp >>= 1;
    }
    return reversed == x;
}

void print_is_binary_palindrome(const uint64_t x, const uint8_t bits_count) {
    if (is_binary_palindrome(x, bits_count)) {
        printf("палиндром\n");
    } else {
        printf("НЕ палиндром\n");
    }
}

bool require(const bool condition, char requirement[]) {
    if (!condition) {
        printf("%s\n", requirement);
    }
    return condition;
}

void print_binary(const uint64_t bits, const uint8_t bits_count, const bool is_double) {
    printf("Двоичная запись: ");
    for (int i = bits_count - 1; i >= 0; --i) {
        putchar((bits >> i) & 1 ? '1' : '0');
        if (is_double && (i == (bits_count - 1) - 0 || i == (bits_count - 1) - 11)) {
            putchar('|');
        }
    }
}
