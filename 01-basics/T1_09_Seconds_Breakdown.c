/*T1.09 — Seconds Breakdown
Drills: the / and % pair working together — a pattern you will reuse constantly
The ask: Read a total number of seconds and break it into hours, minutes and remaining seconds. Use
only / and % — no loops, no library functions. The idea: dividing by 3600 tells you how many whole hours fit;
the remainder after that division is what is left over, and dividing THAT by 60 gives minutes; what remains is
seconds. This divide-and-remainder pattern reappears in digit extraction, base conversion, and time
formatting forever.
Input: One integer (total seconds).
Output: Three integers on one line: hours, minutes, seconds.
Input:  3725
Output: 1 2 5
Watch out: Test with 59 (0 0 59), 60 (0 1 0), and 3600 (1 0 0). Those three catch almost every mistake*/

#include<stdio.h>
int main(){

    // variable declaration and taking input

    int seconds , hours , minutes;
    int total_seconds;
    printf("Enter total seconds: \n");
    scanf("%d",&total_seconds);

    //breaking down seconds into hours,minutes, and seconds

    minutes = total_seconds / 60;
    seconds = total_seconds % 60;

    hours = minutes / 60;
    minutes = minutes % 60;

    printf("%d:%d:%d", hours, minutes, seconds);
    
}