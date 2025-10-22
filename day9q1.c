// Write a program to find the roots of a quadratic equation and categorize them.
// x = -b +-root of b^2-4ac/2a
#include<stdio.h>
#include<math.h>
int main() {
float a, b  , c , d , r1 , r2;
printf("enter a b c:");
scanf("%f %f %f",&a , &b , &c);
d=b*b-4*a*c; // dicriment d = b*-4ac
if (d>0){
    r1=(-b+sqrt(d))/(2*a);
    r2=(-b - sqrt(d))/(2*a);
    printf("roots are real and distict: %.2f and %.2f",r1 , r2);
} else if (d==0){
    r1=-b/(2*a);
    printf("roots are real and equal: %.2f amd %.2f",r1,r2);
} else {
    printf("roots are imaginary");
}
return 0;
}