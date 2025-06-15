/*
In the dweigth.c program (Section 2.4), which spaces are essential?
*/

#include <stdio.h>

// 1: Space between int and main
int main(void)
{
    // 2: Space between int and heigth
    int heigth, length, width, volume, weigth;

    heigth = 8;
    length = 12;
    width = 10;
    volume = heigth * length * width;
    weigth = (volume + 165) / 166;

    printf("Dimensions: %dx%dx%d\n", length, width, heigth);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weigth);

    // 3: Space between return and 0
    return 0;
}
