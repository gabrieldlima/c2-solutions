/*
Condense the dweight.c program by (1) replacing the assignments to height,
length, and width with initializers and (2) removing the weight variable, ins-
tead calculating (volume+165) / 166 within the last printf.
*/

#include <stdio.h>

int main(void)
{
    // (a) Initializers
    int heigth = 8;
    int length = 12;
    int width = 10;

    int volume;
    volume = heigth * length * width;

    printf("Dimensions: %dx%dx%d\n", length, width, heigth);
    printf("Volume (cubic inches): %d\n", volume);

    // (b) Expression inside printf
    printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);

    return 0;
}



/*
Original dweight.c program:

int main(void)
{
    int heigth, length, width, volume, weigth;

    heigth = 8;
    length = 12;
    width = 10;
    volume = heigth * length * width;
    weigth = (volume + 165) / 166;

    printf("Dimensions: %dx%dx%d\n", length, width, heigth);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weigth);

    return 0;
}
*/
