// Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include<stdio.h>
int main() {
    char ch;
    printf("enter any character: ");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
        printf("\n %c is uppercase",ch);
    } else if(ch>='a' && ch<='z'){
        printf("\n %c is lowercase",ch);
    } else if(ch >='0' && ch<='9'){
        printf("\n %c is a digit",ch);
    } 
    else {
        printf("\n %c special charecter",ch);
    }
}