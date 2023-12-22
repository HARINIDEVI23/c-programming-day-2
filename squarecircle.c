#include <stdio.h>
#include <math.h>

int main() {
    char shape;
    float size;

    printf("Enter the shape ('S' for square, 'C' for circle): ");
    scanf("%c", &shape);


    if (shape == 'S' || shape == 's') {
        printf("Enter the size of the square: ");
        scanf("%f", &size);
        float area_square = size * size;
        printf("Area of Square = %.2f\n", area_square);
    } else if (shape == 'C' || shape == 'c') {
        printf("Enter the radius of the circle: ");
        scanf("%f", &size);
        float area_circle = M_PI * size * size;
        printf("Area of Circle = %.2f\n", area_circle);
    } else {
        printf("Invalid shape entered.\n");
        return 1; 
    }

    return 0;
}
