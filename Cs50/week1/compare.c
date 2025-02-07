#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("Define a value for x: ");
    int y = get_int("Define a value for y: ");

    if (x > y)
    {
        printf("The value of ", x, "is higher than ", y);
    }
    else if (x < y)
    {
        printf("The value of ", x, "is lower than ", y);
    }
    else
    {
        printf("The value of ", x, "is equal to", y);
    }
}
