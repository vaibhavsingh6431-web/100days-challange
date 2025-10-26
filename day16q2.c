//Write a program to check if a number is a palindrome.
#include<stdio.h>
int main() {
    int n , reversed =0 , original;
    int reminder ;
    printf("enter a number");
    scanf("%d",&n);
    original=n;
    while(n>0){
        reminder = n%10;
        reversed = reversed*10 + reminder;
        n=n/10;
    }
    if(original==reversed){
        printf("the number is palindrome.\n");
    } else {
        printf("the number is not palidrome.\n");
    }
    return 0;
}