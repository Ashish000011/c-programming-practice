#include<stdio.h>
int main(){
    int num , rem , new_num , copy_num;
    new_num = 0;
    scanf("%d",&num);
    copy_num = num;

    while(num != 0){
        rem = num%10;
        new_num = new_num + rem*rem*rem;
        num = num/10;
    }

    if(new_num == copy_num){
        printf("Armstrong\n");
    }
    else{
        printf("Not armstrong\n");
    }
    
    return 0;
}