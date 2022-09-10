#ifndef funcs
#define funcs

#include "funcs.h"

void printArr(char *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%c\t", arr[i]);
    }
}

char randomRange(int min, int max) {
    double range = (max - min);
    double div = RAND_MAX / range;
    return min + (rand() / div);
}

int lowCnt(char *str) {
    int cnt = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 97 && str[i] <= 122)) {
            cnt++;
        }
    }
    return cnt;
}

void mostRepeated(char *str) {
    int i = 0;
    int max = 0;
    int index = 0;
    int array[1000] = {0};
    for (i = 0; str[i] != 0; i++) {
        array[str[i]]++;
    }
    max = array[0];
    index = 0;
    for (i = 0; str[i] != 0; i++) {
        if (array[str[i]] > max) {
            max = array[str[i]];
            index = i;
        }
    }
    printf("most repeated char is: %c \n", str[index]);
}

#endif