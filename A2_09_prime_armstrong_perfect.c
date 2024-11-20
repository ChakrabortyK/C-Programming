#include <stdio.h>
#include <math.h>

int is_prime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int is_armstrong(int n) {
    int sum = 0, temp = n, digits = 0;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }
    temp = n;
    while (temp != 0) {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }
    return sum == n;
}

int is_perfect(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) sum += i;
    }
    return sum == n;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (is_prime(n)) printf("%d is a prime number.\n", n);
    else printf("%d is not a prime number.\n", n);

    if (is_armstrong(n)) printf("%d is an Armstrong number.\n", n);
    else printf("%d is not an Armstrong number.\n", n);

    if (is_perfect(n)) printf("%d is a perfect number.\n", n);
    else printf("%d is not a perfect number.\n", n);

    return 0;
}
