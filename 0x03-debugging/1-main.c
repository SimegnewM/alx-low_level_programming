#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n"); /*this prints th output infinite loop is comming*/

        i = 0;

        while (i < 10)
        {
                putchar(i);/*this prints the char equivalent of letters*/
        }

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
