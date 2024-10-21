#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main() {
    double circumference;
    double radius;
    double area;

    printf("Enter radius of a circle:\n");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * pow(radius, 2);

    printf("The circumfrence of the circle is %.2lf\n", circumference);
    printf("The area of the circle is %.2lf", area);
    return 0;
}
