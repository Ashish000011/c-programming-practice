/*Drills: integer division vs floating-point division — the whole point of the problem
The ask: Read two integers a and b. Print a divided by b twice: first as plain integer division, then as a real
number with exactly two decimal places. The two answers will be different, and understanding why is the
entire reason this problem exists. In C, dividing an int by an int throws away the fractional part — it does not
round, it truncates. To get the real answer you must make at least one side a floating-point value.
Input: Two integers.
Output: Two lines: the integer result, then the real result to 2 decimal places*/


#include<stdio.h>
int main(){
    // Variable initialization and input scanning
    int a,b;
    printf("Enter two numbers: \n");
    scanf("%d%d",&a,&b);

    // Printing results

    printf("%d\n",a/b);
    printf("%.2f\n",(float)a/b);

    return 0;


}