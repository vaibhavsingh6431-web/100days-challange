//Write a program to take a number as input and print its equivalent binary representation.
#include<stdio.h>
int main() {
    int n ,reminder;
    long long binary=0;
    int place=1;
    printf("enter a number:");
    scanf("%d",&n);
    while(n>0){
        reminder = n%2;
        binary = binary +(reminder*place);
        n=n/2;
        place = place*10;
    }
    printf("binary representation :%11d\n",binary);
    return 0;
}