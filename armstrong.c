#include <stdio.h>
#include <math.h>

int main() {
    int num, original, rem, n = 0, result = 0;
    printf("Enter an integer: ");
    scanf("%d", &num); 
    for (int temp = num; temp != 0; ++n) {
        temp = temp / 10;
    }
    original = num;
    while (original > 0) {
        rem = original % 10;
        result += (int)(pow(rem, n) + 0.5);
        original = original / 10;
    }
    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    
    return 0;
}
