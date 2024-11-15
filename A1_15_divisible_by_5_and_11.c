#include <stdio.h>
int main() {
    for (int i = 100; i <= 500; i++) {
        if (i % 5 == 0 && i % 11 == 0)
            printf("%d is divisible by 5 and 11.\n", i);
    }
    return 0;
}