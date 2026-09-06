#include<stdio.h>
int main(){
    //variable declaration and input taking
    float marks;
    scanf("%f",&marks);

    //printing grades 

    if(marks> 100 || marks < 0){
        printf("Invalid marks\n");
    }
    else if(marks >= 90){
        printf("S\n");
    }
    else if(marks>= 80){
        printf("A\n");
    }
    else if(marks>= 70){
        printf("B\n");
    }
    else if(marks>= 60){
        printf("C\n");
    }
    else if(marks>= 50){
        printf("D\n");
    }
    else{
        printf("F\n");
    }

    return 0;
    
}
