#include <stdio.h>

int factorialNonRecursive(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int factorialRecursive(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorialRecursive(n - 1);
}

int main() {
    int n;

    printf("Enter a natural number n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("\n--- Results for n = %d ---\n", n);
        printf("i) Non-Recursive Factorial: %d\n", factorialNonRecursive(n));
        printf("ii) Recursive Factorial:     %d\n", factorialRecursive(n));
    }

    return 0;
}
