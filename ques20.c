#include <stdio.h>
#include <math.h>
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}
double calculateSine(double x) {
    double sine = 0;
    int sign = 1;

    for (int n = 0; n < 5; n++) {
        int term = 2 * n + 1;
        sine += sign * power(x, term) / factorial(term);
        sign *= -1;
    }

    return sine;
}

int main() {
    double x_degrees, x_radians;

    printf("Enter the angle in degrees: ");
    scanf("%lf", &x_degrees);
    x_radians = x_degrees * M_PI / 180.0;

    double sine_value = calculateSine(x_radians);

    printf("sin(%.2lf degrees) = %.4lf\n", x_degrees, sine_value);

    return 0;
}
