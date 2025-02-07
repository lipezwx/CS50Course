#include <cs50.h>
#include <stdio.h>

int main(void)
{
    /*
    printf("%i\n", get_int("x: ") + get_int("y: "));
    */
    /*
    int x = get_int("x: ");

    printf("%i\n", x * 2);
    */

    /*
    long dollars = 1;
    while (true)
    {
        char c = get_char("Here's $%li. Double it and give it to the next person? ", dollars);
        if (c == 'Y')
        {
            dollars *= 2;
        }
        else
        {
            break;
        }
    }
    */

    /*
    float x = get_float("x: ");
    float y = get_float("y: ");

    printf("%f\n", x / y);
    */

    int x = get_int("x: ");
    int y = get_int("y: ");

    printf("%.3f\n", (float) x / y);
}