#include<stdio.h>
int main(){
    // variable declaration and taking inputs
    int a , b , temp;
    printf("Enter the value of a and b: \n");
    scanf("%d%d",&a,&b);

    //Swapping values with temp

    temp = a;
    a = b;
    b = temp;

    printf("%d %d\n", a, b); 

    return 0;


}