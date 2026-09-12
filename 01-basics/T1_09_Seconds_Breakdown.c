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

    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
    
}