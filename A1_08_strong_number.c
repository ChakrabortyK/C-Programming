#include <stdio.h>
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}
int main() {
    int num, original, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    while (num > 0) {
        digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    if (sum == original)
        printf("%d is a strong number.\n", original);
    else
        printf("%d is not a strong number.\n", original);
    return 0;
}