//WAP Find circumference of square formula : C = 4 * a
#include <stdio.h>

int main() {
    float a;

    // Input width and length from the user
    printf("Enter the area of the square: ");
    scanf("%f", &a);

    // Calculate circumference
    float circumference = 4*a;
    

    // Display the result
    printf("The circumference of the square is: %.2f\n", circumference);

    return 0;
}

