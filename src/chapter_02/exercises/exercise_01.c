/*
Create and run Kernighan and Ritchie's famous "hello, world" program.
*/

#include <stdio.h>

int main(void)
{
    printf("hello world\n");
}

/*
Do you get a warning message from the compiler? If so, what's needed to make it
go away?

Using the command bellow don't produces any warning/error in my machine:
    gcc -Wall -Wextra -Werror -pedantic -ansi -std=c99 exercise_01.c
*/
