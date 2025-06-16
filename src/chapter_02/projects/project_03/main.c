/*
Modify the program of Programming Project 2 so that it prompts the user to enter
the radius of the sphere.
*/

#include <stdio.h>

#define PI 3.14159

int main()
{
    double radius;

    printf("Please, type the sphere radius: ");
    scanf("%le", &radius);

    double formula = (4.0f / 3.0f) * PI * (radius * radius * radius);
    double result_in_cubic_centimetre = formula * 1000;

    printf("Radius: %.2f m\n", radius);
    printf("Volume: %.2f cm³\n", result_in_cubic_centimetre);

    return 0;
}
