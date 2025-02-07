#include <stdio.h>
#include <cs50.h>
#include <stdbool.h>

/* Prototype of function */
int get_positive_int(void);
void meow(int n);

int main(void)
{
    /* While method for show 3 meows
    int i = 0;
    while (i < 3)
    {
        i++;
        printf("Meow\n");
    }
    */

    /* For method to show 3 meows
    int i = 0;
    for (int i = 0; i < 3; i++)
    {
        printf("Meow\n");
    }
    */

    /* Infinite meowing
    while (true)
    {
        meow();
    }
    */

    
    meow(get_positive_int());
    

    
}

void meow(int n)
{
    int i = 0;
    for (i = 0; i < n; i++)
    {
        printf("Meow\n");
    }
}

int get_positive_int(void)
{
    int n;

    do
    {
        n = get_int("Number: ");
    }
    while (n < 1);
    return 0;
}