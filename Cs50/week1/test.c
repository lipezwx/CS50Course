#include <cs50.h>
#include <stdio.h>
#define DECKSIZE 32;

int deal_cards (string deck_name);

int main(void)
{
    /*
    int x = get_int("x: ");
    switch(x)
    {
        case 5:
            printf("Five!\n");
            break;
        case 4:
            printf("Four!\n");
            break;
        case 3:
            printf("Three!\n");
            break;
        case 2:
            printf("Two!\n");
            break;
        case 1:
            printf("One!\n");
            break;
        default:
            printf("Sorry!\n");
    }
    */

    /*  question mark collon method -> after ? == true and after : == false
    bool expr = true;
    int x = (expr) ? 5 : 6;
    printf("%i\n", x);
    */

    /*
    if (expr)
    {
        x = 5;
    }
    else
    {
        x = 6;
    }
    printf("%i\n", x);
    */


    /* Do While Loop 
    int x = get_int("x: ");
    do
    {
        x++;
        printf("%i\n", x);
    }
    while(x<10);
    
    int checker = -1;
    do
    {
        int posInteger = get_int("Give me an positive integer: ");
        checker = posInteger;
    }
    while(checker < 0);
    */

    /* For Loop Structure in C
    int x = get_int("x: ");
    for(int i = 0; i <= x; i++)
    {
        printf("%i\n", i);
    }
    */


    /* Magic Numbers 
    Symbolyc constants
    #define -> find NAME / -> replace REPLACEMENT

    #define DECKSIZE 52;
    int deal_cards (string deck_name)
    {
        int i;
        printf("Formulating deck: %s", deck_name, ".")
        for (int i = 0; i < DECKSIZE; i++)
        {
            printf("%i\n", i);
        }
    }

    */

    deal_cards("Joker");

}

int deal_cards (string deck_name)
{   
    printf("Formulating deck: %s\n", deck_name);
    for (int i = 0; i < DECKSIZE; i++){
        printf("%i\n", i);
    }
    return 0;
}



