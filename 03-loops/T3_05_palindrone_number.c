#include<stdio.h>
int main(){
    int num , rev , rem , copy_num;
    scanf("%d",&num);
    
    rev = 0;
    copy_num = num;

    while(num != 0){
        rem = num%10;
        rev = rev*10 + rem;
        num = num/10;
    }

    if(rev == copy_num){
        printf("Palindrome\n");
    }
    else{
        printf("Not palindrome\n");
    }

    return 0;
}