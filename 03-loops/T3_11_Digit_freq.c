#include <stdio.h>

int main()
{
    int n, d, digit, count = 0;

    
    scanf("%d", &n);

    
    scanf("%d", &d);

    while (n != 0)
    {
        digit = n % 10;

        if (digit == d)
            count++;

        n = n / 10;
    }

    printf("%d\n", count);

    return 0;
}