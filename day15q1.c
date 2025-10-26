//Write a program to calculate the factorial of a number.
#include<stdio.h>
int main() {
int n;
long long factorial=1;
int i=1;
printf("enter a number ");
scanf("%d",&n);
if(n<0){
    printf("factorial is not defined for negtive numbers\n");

} else {
    while(i<=n){
        factorial=factorial*i;
        i++;
    }
}
printf("factorial of %d = %11d\n",n,factorial);

return 0;
}