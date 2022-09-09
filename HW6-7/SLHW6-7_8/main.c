#include <stdio.h>
#include <stdlib.h>

char *itoa(int value, char *result, int base) {
    if (base < 2 || base > 36) {
        *result = '\0';
        return result;
    }

    char *ptr = result, *ptr1 = result, tmp_char;
    int tmp_value;

    do {
        tmp_value = value;
        value /= base;
        *ptr++ = "zyxwvutsrqponmlkjihgfedcba9876543210123456789abcdefghijklmnopqrstuvwxyz"[35 +
                                                                                           (tmp_value - value * base)];
    } while (value);

    if (tmp_value < 0) *ptr++ = '-';
    *ptr-- = '\0';
    while (ptr1 < ptr) {
        tmp_char = *ptr;
        *ptr-- = *ptr1;
        *ptr1++ = tmp_char;
    }
    return result;
}

void Add(const char *p1, const char *p2, char *result) {
    int num1 = atoi(p1);
    int num2 = atoi(p2);
    int sum = num1 + num2;
    result = itoa(sum, result, 10);
}

int main() {
    char *op1 = "12345";
    char *op2 = "678";
    char res[50];
    Add(op1, op2, res);
    printf("%s\n", res);
    return 0;
}
