/*
Write a program that computes the volume of a sphere with a 10-meter radius,
using the formala v = 4/3πr3. Write the fraction 4/3 as 4.0f/3.0f. (Try writing
it as 4/3. What happens?) Hint: C doesn't have an exponentiantion operator, so
you'll need to multiply r by itself twice to compute r3.
*/

#include <stdio.h>

#define PI 3.14159

int main()
{
    double radius = 10;
    double formula = (4.0f / 3.0f) * PI * (radius * radius * radius);
    double result_in_cubic_centimetre = formula * 1000;

    printf("Radius: %.2f m\n", radius);
    printf("Volume: %.2f cm³\n", result_in_cubic_centimetre);

    return 0;
}
