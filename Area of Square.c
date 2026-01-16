#include <stdio.h>

int main() {
    int Side, area;

    // Input the side of the sqaure
    printf("Side: ");
    scanf("%d", &Side);

    // Calculate the area
    area = Side * Side;

    // Output the result
    printf("Area of square: %.d\n", area);

    return 0;
}
