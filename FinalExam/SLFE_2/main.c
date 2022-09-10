#include<stdio.h>
#include<math.h>

unsigned sumArrayDigits(const int *arr, size_t n) {
    unsigned int sum = 0;
    for (int i = 0; i < n; i++) {
        int n = arr[i];
        while (n > 0) {
            int d = n % 10;
            n /= 10;
            sum += d;
        }
    }
    return sum;
}

int main() {
    int arr[] = {12, 34, 5, 70};
    int size = sizeof arr / sizeof *arr;
    int sum = sumArrayDigits(arr, size);
    printf("The Sum of all digits in the array is %d\n", sum);
    return 0;
}
