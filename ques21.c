#include <stdio.h>
#include <math.h>
void areaCircum(double radius, double *area, double *circumference) {
    *area = M_PI * radius * radius;
    *circumference = 2 * M_PI * radius;
}
void areaPeri(double length, double width, double *area, double *perimeter) {
    *area = length * width;
    *perimeter = 2 * (length + width);
}

int main() {
    int choice;
    
    do {
        printf("Menu:\n");
        printf("1. Calculate Circle (Area & Circumference)\n");
        printf("2. Calculate Rectangle (Area & Perimeter)\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                double radius, circleArea, circumference;
                printf("Enter the radius of the circle: ");
                scanf("%lf", &radius);
                areaCircum(radius, &circleArea, &circumference);
                printf("Area of the circle: %.2lf\n", circleArea);
                printf("Circumference of the circle: %.2lf\n", circumference);
                break;
            
            case 2:
                double length, width, rectangleArea, perimeter;
                printf("Enter the length of the rectangle: ");
                scanf("%lf", &length);
                printf("Enter the width of the rectangle: ");
                scanf("%lf", &width);
                areaPeri(length, width, &rectangleArea, &perimeter);
                printf("Area of the rectangle: %.2lf\n", rectangleArea);
                printf("Perimeter of the rectangle: %.2lf\n", perimeter);
                break;

            case 3:
                printf("Exiting program.\n");
                break;
            
            default:
                printf("Invalid choice. Please select 1, 2, or 3.\n");
                break;
        }
    } while (choice != 3);

    return 0;
}
