#include "funcs.h"

int maxOfThree(int x, int y, int z) {
    if (y >= x && y >= z) {
        return y;
    } else if (x >= y && x >= z) {
        return x;
    } else if (z >= x && z >= y) {
        return z;
    }
}

int minOfThree(int x, int y, int z) {
    if (x <= y && x <= z) {
        return x;
    } else if (y <= x && y <= z) {
        return y;
    } else if (z <= x && z <= y) {
        return z;
    }
}
