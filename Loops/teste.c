#include <stdio.h>

int main() {
    char array[100]; // Array to store the name
    printf("What's your name?: ");
    scanf("%s", array); // No need for the & operator before array

    for(int i = 0; i < 100; i++) {
        printf("%s\n", array); // Print the name inside the loop
    }

    return 0;
}
