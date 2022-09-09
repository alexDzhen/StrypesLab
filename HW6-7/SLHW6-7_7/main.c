#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int *pArray, unsigned int length) {
    if (length > 1) {
        for (int i = 0; i < length; i++) {
            for (int j = 0; j < length; j++) {
                if (pArray[i] < pArray[j]) {
                    swap(&pArray[i], &pArray[j]);
                }
            }
        }
    }
}

unsigned int BinSearch(unsigned int *pArray, unsigned int uArraySize, unsigned int uValue) {
    unsigned int max = uArraySize;
    unsigned int min = 0;
    unsigned int point = max / 2;
    unsigned int ret = 0;
    sort(pArray, uArraySize);
    while (pArray[point] != uValue) {
        if (pArray[point] > uValue) {
            max = point;
            point = (min + max) / 2;
            if (pArray[point] == uValue)
                ret = point;
        } else if (pArray[point] < uValue) {
            min = point;
            point = (min + (max / 2)) - 1;
            if (pArray[point] == uValue)
                ret = point;
        } else {
            ret = point;
            continue;
        }
    }
    return ret;
}

int main() {
    int length, sValue;
    printf("The array size: ");
    scanf("%d", &length);
    unsigned int arr[length];
    for (int i = 0; i < length; i++) {
        printf("position %d value:", i);
        scanf("%d", &arr[i]);
    }
    printf("searched value:");
    scanf("%d", &sValue);
    printf("Index %d\n", BinSearch(arr, length, sValue));
    return 0;
}
