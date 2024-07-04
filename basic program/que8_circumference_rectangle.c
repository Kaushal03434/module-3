//WAP circumference of Rectangle formula : C = 4 * a
#include <stdio.h>

int main() {
    float area,width,length;

    // Input width and length from the user
    printf("Enter the area of the rectangle: ");
    scanf("%f", & width);
    
    printf("Enter the area of the rectangle: ");
    scanf("%f",&length);
    
    area = width*length;
    

    // Calculate circumference
    float circumference = 4*area;
    

    // Display the result
    printf("The circumference of the rectangle is: %.2f\n", circumference);

    return 0;
}

