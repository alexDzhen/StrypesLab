#ifndef SLFE_3_FUNCS_H
#define SLFE_3_FUNCS_H

#include <time.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#define COUNT 20
typedef struct node {
    uint64_t data;
    struct node *next;
} node_t;

void push(node_t **head, uint64_t value);

void list(node_t **list);

void print(node_t *head);

node_t *maxE(node_t *head);

uint64_t bitSum(node_t *head);

#endif //SLFE_3_FUNCS_H
