#include <stdio.h>
#include "solution.h"

#include <stdlib.h>

#include "../utils/utils.h"

// Функции `print_binary` и `print_is_binary_palindrome` нужны, чтобы меньше повторять код
void run_negative_integer_check() {
    int n;
    printf("Введите отрицательное целое число: ");
    scanf("%d", &n);

    if (!require(n < 0, "Число должно быть отрицательным")) {
        return;
    }

    const uint32_t bits = (uint32_t) n;
    printf("%d в двоичном дополнительном коде – ", n);
    print_is_binary_palindrome(bits, 32);

    print_binary(bits, 32, false);
    putchar('\n');
}

void run_double_check() {
    double n;
    printf("Введите вещественное число [double]: ");
    scanf("%lf", &n);

    const uint64_t bits = *((uint64_t *) &n);
    printf("%lf в двоичной системе счисления – ", n);
    print_is_binary_palindrome(bits, 64);

    print_binary(bits, 64, true);
    putchar('\n');
}
