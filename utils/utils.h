#ifndef UTILS_H
#define UTILS_H
#include <stdbool.h>
#include <stdint.h>

bool is_binary_palindrome(uint64_t x, uint8_t bits_count);
bool require(bool condition, char requirement[]);

void print_binary(uint64_t bits, uint8_t bits_count, bool is_float);
#endif //UTILS_H
