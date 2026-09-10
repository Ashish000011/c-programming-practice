/*T3.02 — Multiplication Table
Drills: loop with formatted output
The ask: Read N and print its multiplication table from 1 to 10, one line per row, in the shown format.
Straightforward, but the format has to match exactly, spaces included.
Input: One integer N.
Output: Ten lines, each reading N x i = result
Input:  7
Output:
7 x 1 = 7
7 x 2 = 14
...
7 x 10 = 7*/

#include<stdio.h>
int main(){
    int n ,i ;

    scanf("%d",&n);

    for(i = 1; i <= 10; i++){
        printf("%d X %d = %d\n",n,i, i*n);
    }


}