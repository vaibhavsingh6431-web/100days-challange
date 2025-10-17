//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include<stdio.h>
int main() {
    int second, hours , minutes , remainingseconds;
    printf("enter time in seconds");
    scanf("%d",&second);
    hours = second/3600;
    minutes = (second %3600)/60 ;
    remainingseconds = second % 60;
    printf("time = 02%:%02d:%02d\n",hours , minutes , remainingseconds);
return 0;
}