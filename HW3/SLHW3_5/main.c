#include <stdio.h>
#include <stdint.h>

unsigned int onesCount(uint64_t *mask) {
    int count = 0;
    for (int i = 0; i < 64; ++i) {
        if (*mask & ((uint64_t) 1 << i)) {
            count++;
        }
    }
    return count;
}

int main() {
    uint64_t a;
    scanf("%lld", &a);
    printf("1 in the mask are: %d\n", onesCount(&a));
    return 0;
}
