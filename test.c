#include<stdio.h>

int main() {
    int a = 5;    // binary: 0101
    int b = 3;    // binary: 0011
    int result = a & b;  // binary: 0001 (decimal: 1)

    printf("Result of %d & %d is %d\n", a, b, result);
    return 0;
}
