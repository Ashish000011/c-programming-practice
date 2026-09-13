#include <stdio.h>

int main() {
    int n, i, j, prime;

    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        prime = 1;

        if (i < 2)
            prime = 0;
        else {
            for (j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    prime = 0;
                    break;
                }
            }
        }

        if (prime)
            printf("%d ", i);
    }

    printf("\n");

    return 0;
}