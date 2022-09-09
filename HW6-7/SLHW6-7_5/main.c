#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 50

int arr[MAX_SIZE];
int *top = &arr;
int *buffLenght = &arr;
int *pop = &arr;
int *bottom = &arr[MAX_SIZE];

int isEmpty() {
    if (pop == buffLenght) {
        pop = top;
        buffLenght = top;
        return 0;
    }
    return 1;
}

int isFull() {
    if (buffLenght == bottom) {
        printf("full\n");
        return 0;
    }
    return 1;
}

void Push(int newValue) {
    if (!isFull()) return;
    if (isEmpty()) {
        *buffLenght = newValue;
        buffLenght++;
    } else {
        *top = newValue;
        buffLenght++;
    }
}

int Pop() {
    if (!isEmpty()) {
        printf("empty\n");
        return NULL;
    }
    int value = *pop;
    pop++;
    return value;
}

int main() {
    srand(time(NULL));

    for (int i = 0; i < MAX_SIZE - 1; i++) {
        Push(rand());
    }
    Push(22);
    Push(26);
    for (int i = 0; i <= MAX_SIZE; i++) {
        printf("%d\n", Pop());
    }
    printf("%d\n", Pop());
    return 0;
}
