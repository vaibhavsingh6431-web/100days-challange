// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
int main() {
    int l ,b ,area , perimeter;
    printf("enter l");
    scanf("%d",&l);
    printf("enter b");
    scanf("%d", &b);
    area = l*b;
    perimeter= 2*(l+b);
    printf("area=%d , perimeter=%d" ,area , perimeter);
    return 0;
dd
}