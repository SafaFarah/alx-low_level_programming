#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point generates a random password
 *
 * Return: always 0
 */
int main(void)
{
    char c;
    int sum = 0;

    srand(time(0));
    while (sum <= 2645)
    {
        c = rand() % 128;
        sum += c;
        putchar(c);
    }
    putchar(2772 - sum);
    return (0);
}

