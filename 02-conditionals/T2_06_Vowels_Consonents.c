#include<stdio.h>
int main(){
    //variable declaration and input taking

    char ch;
    scanf("%c",&ch);

    // checking if its vowel or consonant and printing result

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        printf("Vowel\n");
    }
    else{
        printf("Consonant\n");
    }

    return 0;
}