/*
Why is it not a good idea for an identifier to contain more then one adjacent
underscore (as in current__balance, for example)?

A: Because it is reserved for compiler and standard library and may conflict
with compiler or standard library names. Also, it's more difficult to read.
*/

#include <stdio.h>

int main(void)
{
    int current__balance = 10;
    printf("%d\n", current__balance);

    return 0;
}
