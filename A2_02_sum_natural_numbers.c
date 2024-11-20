#include <stdio.h>

int sum_of_natural_numbers(int n) {
    if (n == 1) {
        return 1;
    }
    return n + sum_of_natural_numbers(n - 1);
}

int main() {
    int result = sum_of_natural_numbers(20);
    printf("The sum of the first 20 natural numbers is: %d\n", result);
    return 0;
}