#include <stdio.h>

int main() {
    // Variable declaration and input taking
    int number;
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("Even");
    } else {
        printf("Odd");
    }

    return 0;
}
