#include <stdio.h>

int main() {
    int units, bill;

    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 3;
    }
    else if (units <= 200) {
        bill = (100 * 3) + ((units - 100) * 5);
    }
    else {
        bill = (100 * 3) + (100 * 5) + ((units - 200) * 8);
    }

    printf("%d", bill);

    return 0;
}