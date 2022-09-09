#include <stdio.h>


void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int *pArray, unsigned int uLen) {
    if (uLen > 1) {
        for (int i = 0; i < uLen; i++) {
            for (int j = 0; j < uLen; j++) {
                if (pArray[i] < pArray[j]) {
                    swap(&pArray[i], &pArray[j]);
                }
            }
        }
    }

}

int main() {
    int arr[20] = {156, 335, 221, 666, 456, 999, 723, 119, 100, 629, 3, 19, 75, 6, 7, 36, 44, 9, 55, 38};
    sort(arr, 20);
    for (int i = 0; i < 20; i++) {
        printf("%d\t", arr[i]);
    }
    return 0;
}
