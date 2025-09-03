#include <stdio.h>

int main() {
    int num, a = 0, b = 1, c;
    printf("Enter an integer  ");
    scanf("%d", &num);
    {
    printf("%d is a part of the Fibonacci series.\n", num);
    return 0;
    }
    c = a + b;
    while (c <= num) {
    if (c == num) {
    printf("%d is a part of the Fibonacci series.\n", num);
    return 0;
    }
    a = b;
    b = c;
    c = a + b;
    }
    printf("%d is not a part of the Fibonacci series.\n", num);
    return 0;
}
