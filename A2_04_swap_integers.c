#include <stdio.h>

void swap_by_value(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("After swap by value: a = %d, b = %d\n", a, b);
}

void swap_by_reference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("After swap by reference: a = %d, b = %d\n", *a, *b);
}

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    swap_by_value(a, b);
    swap_by_reference(&a, &b);

    return 0;
}
