#include <stdio.h>

int main() {
    int x, y, z;

    // Read values of x, y, and z from the user
    printf("Enter the values of x, y, and z: ");
    scanf("%d %d %d", &x, &y, &z);

    // Rotate the values
    int temp = x;
    x = y;
    y = z;
    z = temp;

    // Print the rotated values
    printf("After rotation:\n");
    printf("x: %d\n", x);
    printf("y: %d\n", y);
    printf("z: %d\n", z);

    return 0;
}
