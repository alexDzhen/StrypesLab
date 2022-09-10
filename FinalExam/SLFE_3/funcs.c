#include "funcs.h"

#define CHECK(mask, bit) !!(mask & (1ull << (bit)))

void push(node_t **head, uint64_t value) {
    node_t *newNode = malloc(sizeof(node_t));
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}

void print(node_t *head) {
    node_t *curr = head;
    while (curr != NULL) {
        printf("%llu\n", curr->data);
        curr = curr->next;
    }
}

void list(node_t **list) {
    node_t *curr = *list, *prev;
    while (curr) {
        prev = curr;
        curr = curr->next;
        free(prev);
    }
    *list = NULL;
}

node_t *maxE(node_t *head) {
    uint64_t max = 0;
    node_t *back = NULL;
    node_t *curr = head;
    while (curr != NULL) {
        if (curr->data > max) {
            max = curr->data;
            back = curr;
        }
        curr = curr->next;
    }
    return back;
}

uint64_t bitSum(node_t *head) {
    uint64_t sum = 0;
    node_t *curr = head;
    while (curr != NULL) {
        for (int i = 0; i < 64; i++) {
            if (CHECK(curr->data, i)) {
                sum++;
            }
        }
        curr = curr->next;
    }
    return sum;
}