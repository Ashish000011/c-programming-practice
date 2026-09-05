/*T1.11 — Digit Sum (3-digit)
Drills: repeated / and % to peel digits apart, without a loop
The ask: Read a three-digit number and print the sum of its three digits. The constraint is that you may not
use a loop — the number is guaranteed to be exactly three digits, so you can extract each digit with a fixed
sequence of / and % operations. Work out on paper how to isolate the hundreds digit, the tens digit and the
units digit from 456 before writing anything.
Input: One three-digit integer.
Output: One integer (the sum).
Input:  456
Output: 15
Not to be confused with: T3.04 / T4.07, which do the same job for a number of ANY length and therefore need
a loop or recursion. Here the fixed length is what lets you avoid one*/

#include<Stdio.h>
int main(){

    //variable declering and input taking
    int digit,reminder , sum ;
    printf("Enter number of 3 digits: \n");
    scanf("%d",&digit);

    //extrating digits and taking sum

    sum = 0 ;
    reminder = digit%10;
    sum = reminder+sum;
    digit = digit/10;
    reminder = digit%10;
    sum = reminder+sum;
    digit = digit/10;
    sum = sum +digit ;

    printf("%d\n",sum);

    return 0;
}