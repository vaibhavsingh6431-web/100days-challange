//Write a program to input two numbers and display their sum, difference, product, and quotient.

#include<stdio.h>
int main() {
    int a ,b;
     printf("enter two numbers;");
    scanf("%d%d",&a,&b);
    int sum = a+b;
    int difference = a-b;
    int product = a *b;
    int quotient = a/b;
    printf("sum = %d , diff =%d , product=%d , quotient=%d",sum,difference,product,quotient);
    return 0;

}