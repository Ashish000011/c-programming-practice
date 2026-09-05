#include<stdio.h>
int main(){
    // variable declaration and taking input
    int number;
    char character;

    printf("Enter a number(between 65 - 90) and a character: \n");
    scanf("%d %c", &number, &character);

    // printing output

    printf("%c %d\n",number,character);

}