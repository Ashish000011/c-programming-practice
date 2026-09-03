#include<stdio.h>
int main(){
    // variable declaration and scanning values
    
    int a,b;
    printf("enter the values: ");
    scanf("%d%d",&a,&b);

    //Swapping without temp

    a = a+b;
    b = a-b;
    a = a-b;

    // printing results

    printf("%d %d\n",a,b);

    return 0;
}