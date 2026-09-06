#include <stdio.h>

int main() {
    int held, attended;
    float percentage;

    scanf("%d%d", &held, &attended);

    percentage = ((float) attended / held) * 100;

    printf("%.1f\n", percentage);

    if (percentage >= 75.0) {
        printf("SAFE\n");
    }
    else {
        printf("SHORT\n");
    }

    return 0;
}