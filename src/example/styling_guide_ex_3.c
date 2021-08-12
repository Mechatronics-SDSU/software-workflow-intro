#include <stdio.h>

/* Calculates the fibonacci sequence to 10 numbers.
a + b = c, a = b, b = c Are the 3 basic operations.
num_a is the initial a value.
num_b is the initial b value.
returns a char array with all calculated numbers.
*/
int* fibonacci(int num_a, int num_b) {
    static int entries[10];
    entries[0] = num_a;
    entries[1] = num_b;
    int num_c;
    for (int i = 2; i < 10; i++) {
        num_c = num_a + num_b;
        entries[i] = num_c;
        num_a = num_b;
        num_b = num_c;
    }
    return entries;
}

/* Main function, calculate the Fibonacci sequence to 10 numbers and print. */
int main() {
    int* result = fibonacci(0, 1); /* Start at a=0, b=1 */
    for (int i = 0; i < 10; i++) {
        printf("%d ", *(result+i));
    }
    printf("\n");
    return 0;
}