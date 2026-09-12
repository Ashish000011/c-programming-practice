#include<stdio.h>

int main(){
    long long int fact= 1;
    int num;
    int i;

    // my program can only find correct fact upto 20! after tht it will be incorrect 

    scanf("%d",&num);

    for(i = 1 ; i <= num ; i++){
        fact = fact*i;
    }

    printf("%lld\n",fact);

    return 0;
}