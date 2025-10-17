/*Write a program to input an integer and check whether it is positive, n
egative or zero using nested if–else. */
#include<stdio.h>
int main() {
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if(num>0) {
        printf("the number is postive");
    }  else if(num<0) {
        printf("the number is negative");
    } else {
        printf("zero");
    }
    
    
    return 0;
}