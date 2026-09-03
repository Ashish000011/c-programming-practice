#include<stdio.h>
int main(){
    
    // Variable declaration and input taking
   
    float principle, rate, time , si ;
    printf("Enter the values of principle , rate , time: ");
    scanf("%f%f%f",&principle, &rate , &time);

    // calculating intrest and printing results

    si = (principle*rate*time)/100.0;
    printf("%.2f\n",si);

    return 0;

}