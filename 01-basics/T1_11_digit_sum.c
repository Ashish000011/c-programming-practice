#include<stdio.h>
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