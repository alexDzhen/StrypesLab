#include <stdio.h>

int main() {
    float num1, num2;
    char op;

    while ((scanf("%f %c %f", &num1, &op, &num2)) != EOF) {
        switch (op) {
            case '+':
                printf("%.2f\n", num1 + num2);
                break;
            case '-':
                printf("%.2f\n", num1 - num2);
                break;
            case '*':
                printf("%.2f\n", num1 * num2);
                break;
            case '/':
                printf("%.2f\n", num1 / num2);
                break;
            default:
                printf("Wrong input\n");
                break;
        }
    }


    return 0;
}