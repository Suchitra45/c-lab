#include <stdio.h>
#include <math.h>
int main() {
    printf("SUCHITRA RANA\n");
    double a, b, c, discriminant, root1, root2;
    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    discriminant = b * b - 4 * a * c;
    if (discriminant >= 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    } else {
        printf("Roots are imaginary.\n");
    }
    return 0;
}
