#include <stdio.h>
int main() {
    int num1, num2;
    int i;
    printf("enter the first number ");
    scanf("%d", &num1);
    printf("enter the second number ");
    scanf("%d", &num2);
    for(i=num1;i<=num2;i=i+1) {
    if(i%2==0) {
    printf("square of %d is %d\n", i, i*i);
    } 
    else {
    printf("cube of %d is %d\n", i, i*i*i);
    }
    }
    return 0;
}