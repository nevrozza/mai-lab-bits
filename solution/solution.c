#include <stdio.h>
#include "solution.h"

#include <stdlib.h>

#include "../utils/utils.h"

void run_negative_integer_check() {
    int n;
    printf("Введите отрицательное целое число: ");

    scanf("%d", &n);
    if (!require(n < 0, "Число должно быть отрицательным")) {
        return;
    }

    uint32_t bits = (uint32_t) n;

    if (is_binary_palindrome(bits, 32)) {
        printf("Двоичное представление числа %d в дополнительном коде – палиндром.\n", n);
    } else {
        printf("Двоичное представление числа %d в дополнительном коде – НЕ палиндром.\n", n);
    }

    printf("Двоичная запись: ");
    print_binary(bits, 32, false);
    putchar('\n');
}

void run_double_check() {
    double n;
    printf("Введите вещественное число [double]: ");
    scanf("%lf", &n);

    uint64_t bits = *((uint64_t *) &n);

    if (is_binary_palindrome(bits, 64)) {
        printf("Двоичное представление числа %lf – палиндром.\n", n);
    } else {
        printf("Двоичное представление числа %lf – НЕ палиндром.\n", n);
    }
    printf("Двоичная запись: ");
    print_binary(bits, 64, true);
    putchar('\n');
}
