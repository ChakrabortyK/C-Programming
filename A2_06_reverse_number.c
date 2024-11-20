#include <stdio.h>

int reverse_number(int n, int rev) {
    if (n == 0) {
        return rev;
    }
    return reverse_number(n / 10, rev * 10 + n % 10);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Reverse of the number: %d\n", reverse_number(n, 0));
    return 0;
}
