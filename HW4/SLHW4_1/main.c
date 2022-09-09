#include <stdio.h>

int secondMax(const int *arr, size_t n, int *secondMax) {
    if (n > 1) {
        int max = 0, sm = -1;

        for (int i = 0; i < n; i++) {
            if (arr[i] > arr[max]) {
                max = i;
            }
        }
        for (int i = 0; i < n; i++) {
            if (arr[i] != arr[max]) {
                if (sm == -1) {
                    sm = i;
                } else if (arr[i] > arr[sm])
                    sm = i;
            }
        }
        if (sm == -1) {
            return 3;
        } else
            *secondMax = arr[sm];
    } else if (n == 1) {
        return 1;
    } else
        return 2;
}

int main() {
    int sm;
    int arr[] = {12, 34, 5, 70, 46};
    size_t size = sizeof(arr) / sizeof(arr[0]);
    if (secondMax(arr, size, &sm) == 1) {
        printf("One element\n");
    } else if (secondMax(arr, size, &sm) == 2) {
        printf("Empty Array\n");
    } else if (secondMax(arr, size, &sm) == 3) {
        printf("Same Elements\n");
    } else
        printf("Second Max is %d\n", sm);
    return 0;
}

