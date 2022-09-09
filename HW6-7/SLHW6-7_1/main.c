#include <stdio.h>

unsigned char checkBit(unsigned int uValue) {
    int n = sizeof(int) * 8;
    int bit = 0;
    for (int i = 0; i < n; ++i) {
        if (uValue & 1 << i) {
            bit++;
        }
    }
    if (bit == 1) {
        return '1';
    } else {
        return '0';
    }
}

int main() {
    unsigned int number = 0x0400;
    printf("%c\n", checkBit(number));
    return 0;
}
