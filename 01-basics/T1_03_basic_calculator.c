#include<stdio.h>
int main() {
    //variable declaration and taking inputs 
    int a,b;
    printf("Enter two nums: \n");
    scanf("%d%d",&a,&b);

    //printing results
    printf("%d\n",a+b);
    printf("%d\n",a-b);
    printf("%d\n",(a*b));

    return 0;
}