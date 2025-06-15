/*
Write a programa that declares several int and float variables - without initia-
lizing them - and the prints their values. Is there any pattern to the values?
(Usually there isn't).

A: In my program bellow, the two first int variables gets a random number and
the last three of them gets zero. The float variables, all of them just get
0.000000. This is one the outputs:

Int:
32508
271924768
0
0
0

Float:
0.000000
0.000000
0.000000
0.000000
0.000000
*/

#include <stdio.h>

int main(void)
{
    int whole_n01, whole_n02, whole_n03, whole_n04, whole_n05;
    float decimal_n01, decimal_n02, decimal_n03, decimal_n04, decimal_n05;

    printf("Int:\n%d\n%d\n%d\n%d\n%d\n\n", whole_n01,
                                           whole_n02,
                                           whole_n03,
                                           whole_n04,
                                           whole_n05);

    printf("Float:\n%f\n%f\n%f\n%f\n%f\n", decimal_n01,
                                           decimal_n02,
                                           decimal_n03,
                                           decimal_n04,
                                           decimal_n05);

    return 0;
}
