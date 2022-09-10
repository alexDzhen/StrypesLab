#include "funcs.h"

int main() {
    time_t t;
    srand((unsigned) time(&t));
    node_t *head = NULL;
    node_t *biggest = NULL;
    for (int i = 0; i < COUNT; i++) {
        uint64_t number = (uint64_t) rand() % UINT64_MAX;
        push(&head, number);
    }
    biggest = maxE(head);
    print(head);
    printf("Setted 1's: %llu", bitSum(head));
    printf("Biggest:%llu\n", biggest->data);
    list(head);
    return 0;
}