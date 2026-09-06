#include<stdio.h>
int main(){
    //variable declaration and taking input
    int year;
    scanf("%d",&year);

    //checking and printing result

    if(year%4== 0 && (year%100 != 0 || year%400 == 0)){
        printf("leap\n");
    }
    else{
        printf("not leap\n");
    }

    return 0;
}