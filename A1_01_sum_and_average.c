#include <stdio.h>
int main() {
    int a, b, c;
    float sum, avg;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    sum = a + b + c;
    avg = sum / 3;
    printf("Sum = %.2f, Average = %.2f\n", sum, avg);
    return 0;
}