// Write a program to check if a number is a perfect number.
#include<stdio.h>
int main() {
    int num ,i , sum=0;
    printf("enter a number:");
    scanf("%d",&num);
    for(int i=1; i<=num/2;i++){
        if(num%i==0){
            sum +=i;
        }
    }
    if(sum==num){
        printf("%d is perfect number \n",num);
    } else {
        printf("%d is not a perfect number\n",num);

    }
    return 0;
}