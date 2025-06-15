/*
Which of the following are not legal C identifiers?
(a) 100_bottles
(b) _100_bottles
(c) one_hundred_bottles
(d) bottles_by_the_hundred_
 */

#include <stdio.h>

int main(void)
{
    // This is not valid. 
    int 100_bottles; 
    // Compiler error:
    // exercise_05.c:14:9: error: invalid suffix "_bottles" on integer constant
    //    14 |     int 100_bottles;
    //       |         ^~~~~~~~~~~
    // exercise_05.c:14:9: error: expected identifier or ‘(’ before numeric constant

    int _100_bottles; // And this is not recomended
    int one_hundred_bottles;
    int bottles_by_the_hundred_;

    return 0;
}
