#include <stdio.h>

int main() {
    int X, Y;
    short int Z;

    X = 123456;
    Y = 654321;

    // Assign the sum of X, Y, and Z
    Z = (short int)(X + Y);

    printf("X: %d\n", X);
    printf("Y: %d\n", Y);
    printf("Z: %d\n", Z);

    return 0;
}
