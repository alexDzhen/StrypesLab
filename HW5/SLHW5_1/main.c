#include <stdio.h>
#include "funcs.h"

#define MAX(x, y, z) maxOfThree(x,y,z)
#define MIN(x, y, z) minOfThree(x,y,z)
#define SETBIT(mask, bit) (mask|=(1ull<<(bit)))
#define CLEARBIT(mask, bit) (mask&=(1ull<<(bit)))
#define INVERSEBIT(mask, bit) (mask^=(1ull<<(bit)))
#define CHECKBIT(mask, bit) !!(mask&(1ull<<(bit)))
#define SWAP(a, b) for(int i=0;i<64;i++) {if(CHECKBIT(b,i)!= CHECKBIT(a,i)){INVERSEBIT(a,i); INVERSEBIT(b,i);}}

int main() {
    int a = 11;
    int b = 22;
    int c = 33;

    printf("Max number: %d\n", MAX(a, b, c));
    printf("Min number: %d\n", MIN(a, b, c));
    printf("Set %d\n", SETBIT(c, 2));
    printf("Clear %d\n", CLEARBIT(c, 2));
    printf("Inverse %d\n", INVERSEBIT(c, 2));
    printf("Check %d\n", INVERSEBIT(c, 2));
    printf("Before swap %d, %d\n", b, a);
    SWAP(b, a);
    printf("After swap %d, %d\n", b, a);

    return 0;
}
