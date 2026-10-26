#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2, sum;
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    int *ptrSum = &sum;

    printf("Enter two numbers: ");
    scanf("%d %d", ptr1, ptr2);

    *ptrSum = *ptr1 + *ptr2;
    printf("Sum using pointers: %d\n", *ptrSum);

    printf("\nBefore swapping: num1 = %d, num2 = %d\n", *ptr1, *ptr2);
    
    swap(ptr1, ptr2);
    
    printf("After swapping: num1 = %d, num2 = %d\n", *ptr1, *ptr2);

    return 0;
}
