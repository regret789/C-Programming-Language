#include <stdio.h>
#include <math.h>

int main() {
    printf("Serial Number\tNumber\tSquare Number\tSquare Root\n");
    
    for (int num = 0; num <= 100; num += 10) {
        double squareRoot = sqrt(num);
        int square = num * num;
        
        printf("%d           \t%d            \t%d       \t%.2lf    \n", (num / 10) + 1, num, square, squareRoot);
    }
    
    return 0;
}
