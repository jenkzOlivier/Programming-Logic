#include <stdio.h>
#include <stdlib.h>

void power(int *pointer) {
    int resposta = pointer[0] * (pointer[1] * pointer[1]);
    printf("the power between %d and %d it's: %d\n", pointer[0], pointer[1], resposta);
}

void division(int *pointer) {
    if (pointer[1] == 0) {
        printf("can't make division by zero!\n");
        return;
    }
    int resposta = pointer[0] / pointer[1];
    printf("the division between %d and %d it's: %d\n", pointer[0], pointer[1], resposta);
}

void multiplication(int *pointer) {
    int resposta = pointer[0] * pointer[1];
    printf("the multiplication between %d and %d it's: %d\n", pointer[0], pointer[1], resposta);
}

void subtraction(int *pointer) {
    int resposta = pointer[0] - pointer[1];
    printf("the subtraction between %d and %d it's: %d\n", pointer[0], pointer[1], resposta);
}

void adition(int *pointer) {
    int resposta = pointer[0] + pointer[1];
    printf("the sum between %d and %d it's: %d\n", pointer[0], pointer[1], resposta);
}

int *allocation(int **pointer, int size) {
    *pointer = (int *)malloc(size * sizeof(int));
    int counter = 1;

    for (int i = 0; i < size; i++) {
        printf("%d| number: ", counter);
        scanf("%d", &((*pointer)[i]));
    }

    return *pointer;
}

void MemoryRelease(int **pointer) {
    free(*pointer);
    *pointer = NULL;
}

int menu() {
    int size = 2;
    int answer;

    while (1) {
        int *pointer;
        printf("\nwhat do you wanna do?:\n");
        printf("1-adition\n");
        printf("2-subtraction\n");
        printf("3-multiplication\n");
        printf("4-division\n");
        printf("5-power\n");
        printf("6-exit\n\n");
        scanf("%d", &answer);

        switch (answer) {
            case 1:
                allocation(&pointer, size);
                adition(pointer);
                MemoryRelease(&pointer);
                break;

            case 2:
                allocation(&pointer, size);
                subtraction(pointer);
                MemoryRelease(&pointer);
                break;

            case 3:
                allocation(&pointer, size);
                multiplication(pointer);
                MemoryRelease(&pointer);
                break;

            case 4:
                allocation(&pointer, size);
                division(pointer);
                MemoryRelease(&pointer);
                break;

            case 5:
                allocation(&pointer, size);
                power(pointer);
                MemoryRelease(&pointer);
                break;

            case 6:
                printf("exiting...\n\n");
                MemoryRelease(&pointer);
                return 0;

            default:
                printf("you didn't choose any of the options!\n\n");
                break;
        }
    }
}

int main() {
    menu();
    return 0;
}