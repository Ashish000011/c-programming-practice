#include<stdio.h>
int main(){

    //variable declaraing and input taking 
    int number , last_digit;
    printf("Enter the number: \n");
    scanf("%d",&number);

    //Extracting last digit

    last_digit = number%10;

    printf("%d\n",last_digit);

    return 0;
}