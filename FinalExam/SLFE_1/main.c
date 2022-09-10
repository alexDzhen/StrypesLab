#include "funcs.h"


int main(int argc, char const *argv[]) {
    srand(time(NULL));
    char symbols[] = {'!', '?', '$', '@', '*', '%', '-'};
    int n = 0;
    int m = 0;
    int k = 0;
    char *arr;


    printf("Please enter first n elements in the array: ");
    scanf("%d", &n);
    arr = (char *) malloc(n * sizeof(char));
    if (arr == NULL) {
        fprintf(stderr, "%s", "Memory not reallocated.\n");
        return EXIT_FAILURE;
    } else {
        for (size_t i = 0; i < n; i++) {
            arr[i] = randomRange(97, 122);
        }
    }


    printf("Please enter next m elements in the array: ");
    scanf("%d", &m);
    arr = (char *) realloc(arr, (m + n) * sizeof(char));
    if (arr == NULL) {
        fprintf(stderr, "%s", "Memory not reallocated.\n");
        return EXIT_FAILURE;
    } else {
        for (size_t i = n; i < m + n; i++) {
            arr[i] = randomRange(65, 90);
        }
    }


    printf("Please enter next k elements in the array: ");
    scanf("%d", &k);
    arr = (char *) realloc(arr, (m + n + k) * sizeof(char));
    if (arr == NULL) {
        fprintf(stderr, "%s", "Memory not reallocated.\n");
        return EXIT_FAILURE;
    } else {
        for (size_t i = m + n; i < m + n + k; i++) {
            arr[i] = symbols[rand() / (RAND_MAX / 6)];
        }
    }
    printArr(arr, m + n + k);
    printf("low cnt: %d \n", lowCnt(arr));
    mostRepeated(arr);
    free(arr);

    return 0;
}

