#include<stdio.h>
int main(){
    
    //variable declaration and input reading

    float a,b;
    printf("Enter the temprature in celcius: ");
    scanf("%f",&a);

    // converting tempature and printing results

    b = a *(9.0/5.0) +32;

    printf("%.1f\n",b);

    return 0;

}