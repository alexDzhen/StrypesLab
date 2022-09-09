#include<stdio.h>
#include<math.h>

unsigned sumArrayDigits(const int *arr, size_t n) {
    unsigned int sum = 0;
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        while (num > 0) {
            int digit = num % 10;
            num /= 10;
            sum += digit;
        }
    }
    return sum;
}

int main() {
    int arr[] = {12, 34, 5, 70};
    int sizeArr = sizeof arr / sizeof *arr;
    int result = sumArrayDigits(arr, sizeArr);
    printf("The sum is %d\n", result);
    return 0;
}
