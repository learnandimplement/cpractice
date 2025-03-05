#include <stdio.h>

int main() {
    int num1 = 5, num2 = 6;

    // Swapping without a temporary variable
    num1 = num1 + num2; // num1 = 5 + 6 = 11
    num2 = num1 - num2; // num2 = 11 - 6 = 5
    num1 = num1 - num2; // num1 = 11 - 5 = 6

    // Improved output formatting
    printf("The swapped values are:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    return 0;
}
