#include <stdio.h>

void Revers(char *ptr) {
    int length = 0;
    while (ptr[length] != '\0') {
        length++;
    }
    int swapSize = length / 2;
    for (int i = 0; i < swapSize; ++i) {
        char temp = ptr[i];
        ptr[i] = ptr[length - 1 - i];
        ptr[length - 1 - i] = temp;
    }
}

int main() {

    char str[] = "This is a test";

    Revers(str);

    printf("%s", str);
    printf("\n");

    return 0;
}
