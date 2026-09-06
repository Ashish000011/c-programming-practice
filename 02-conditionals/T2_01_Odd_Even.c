/*T2.01 — Odd or Even
Drills: the if-else skeleton; % as a test rather than a value
The ask: Read an integer and print whether it is odd or even. The test is whether the remainder when
divided by 2 is zero. Trivial problem, but it is where you meet the pattern that every conditional uses:
compute something, compare it, branch on the result.
Input: One integer.
Output: Exactly the word Odd or the word Even.
Input:  7
Output: Odd
Watch out: Capital first letter, matching the sample exactly. Also test with 0 (even) and a negative number
— in C, -7 % 2 gives -1, not 1, so a test written as (n % 2 == 1) fails on negatives while (n % 2 == 0) is safe.*/

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
